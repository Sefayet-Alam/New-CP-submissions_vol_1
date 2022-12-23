#include<iostream>
#include<fstream>
#include<iomanip>
#include<string>

using namespace std;

int idx=0;
int trid=0;
class user
{

    string dateofbirth;
    string name;
    long long mobileno;
    string address;
    long long NID;
    string pin;
public:
    void setdob(string dob){
    dateofbirth=dob;
    }
     void setmobileno(long long mb){
    mobileno=mb;
    }
     void setname(string nam){
    name=nam;
    }
    void setNID(long long nid){
    NID=nid;
    }
     void setpin(string pi){
    pin=pi;
    }
     void setaddress(string addr){
    address=addr;
    }



    //getters

     string getdob(){
    return dateofbirth;
    }
     long long getmobileno(){
    return mobileno;
    }
     string getname(){
    return name;
    }
    long long getNID(){
    return NID;
    }
    string getpin(){
    return pin;
    }
    string getaddress(){
    return address;
    }


};
class transaction
{
    double amount;
    int type;
    double time;
    user source;
    user dest;
public:

    void setval(double amnt,user src2,user dst2)
    {
        amount=amnt;
        type=1;
        source=src2;
        dest=dst2;
    }
    void getvalsrcoftrans()
    {
        cout<<endl<<endl;
        cout<<"source: "<<endl;
        cout<<"name: "<<source.getname()<<endl;
        cout<<"mobile: "<<source.getmobileno()<<endl;
        cout<<"address: "<<source.getaddress()<<endl;
        cout<<"NID: "<<source.getNID()<<endl;

    }
    void getvaldestoftrans()
    {
        cout<<endl<<endl;
        cout<<"destination: "<<endl;
        cout<<"name: "<<dest.getname()<<endl;
        cout<<"mobile: "<<dest.getmobileno()<<endl;
        cout<<"address: "<<dest.getaddress()<<endl;
        cout<<"NID: "<<dest.getNID()<<endl;

    }
};

class account
{
    double balance=0;
    user info;
    // int no=0;
public:
    void setval(string dob,string nam,long long mobile,string addr,long long nid,string PIN)
    {
        //let initial balance be 1000 for easy transactions
        balance=1000;
        info.setdob(dob);
        info.setname(nam);
        info.setmobileno(mobile);
        info.setaddress(addr);
        info.setNID(nid);
        info.setpin(PIN);

    }
    user getinfo2()
    {
        return info;
    }
    double getbalance2()
    {
        return balance;
    }
    string getdob2()
    {
        return info.getdob();

    }
    string getname2()
    {
        return info.getname();
    }
    long long getmobileno2()
    {
        return info.getmobileno();
    }
    string getaddress2()
    {
        return info.getaddress();
    }
    long long getnid2()
    {
        return info.getNID();
    }
    string getpin2()
    {
        return info.getpin();
    }

    void setbalanceinc(double amount)
    {
        balance+=amount;
    }
    void setbalancedec(double amount)
    {

        balance-=amount;
    }

};
    account acc[100];
    transaction tr[1000];
void saverecord(){
    int m=20;//m is used to maintain the gaps between coloumns
    ofstream fout("record_lab_03.txt");
   
    for(int j=0;j<idx;j++){
        user p1=acc[j].getinfo2();
        string p=p1.getname();
        string q=p1.getaddress();
        int k=p.size();
        int l=q.size();
         cout<<acc[j].getname2()<<setw(m-k)<<acc[j].getaddress2()<<setw(8)<<acc[j].getbalance2()<<setw(8)<<" "<<acc[j].getdob2()<<setw(8)<<acc[j].getmobileno2()<<setw(8)<<acc[j].getnid2()<<setw(m-l)<<acc[j].getpin2()<<endl;
        fout<<acc[j].getname2()<<setw(m-k)<<acc[j].getaddress2()<<setw(8)<<acc[j].getbalance2()<<setw(8)<<" "<<acc[j].getdob2()<<setw(8)<<acc[j].getmobileno2()<<setw(8)<<acc[j].getnid2()<<setw(m-l)<<acc[j].getpin2()<<endl;
    }


}
void getrecord(){

    string dateofbirth3;
    string name3;
    long long mobileno3;
    string address3;
    long long NID3;
    string pin3;
    int balance3;
    ifstream fin("record_lab_03.txt");

   
    while(fin>>name3>>address3>>balance3>>dateofbirth3>>mobileno3>>NID3>>pin3){
       acc[idx].setbalanceinc(balance3);
       acc[idx].setval(dateofbirth3,name3,mobileno3,address3,NID3,pin3);
       idx++;
    }
    

}
int main()
{
    getrecord();
  
    while(1)
    {
        int choice;
        cout<<"Menu: \n1.Create account\n 2.Send money\n0.Exit"<<endl;
        cout<<"Enter your choice: ";

        cin>>choice;

        string dateofbirth2;
        string name2;
        long long mobileno2;
        string address2;
        long long NID2;
        string pin2;
        int tru=0;

        if(choice==0)
        {
            saverecord();
            cout<<"Thank you"<<endl;
            break;
        }

        switch(choice)
        {
        case 1:
            cout<<endl;
            //create an account
            cout<<"TO create an account:"<<endl;
            cout<<"Enter your name: ";
            cin>>name2;
            cout<<"Enter your date of birth: ";
            cin>>dateofbirth2;
            cout<<"Enter your mobile no: ";
            cin>>mobileno2;
            cout<<"Enter your address: ";
            cin>>address2;
            cout<<"Enter your NID: ";
            cin>>NID2;
            cout<<"Enter your PIN: ";
            cin>>pin2;

            acc[idx].setval(dateofbirth2,name2,mobileno2,address2,NID2,pin2);
            cout<<"Your infos: "<<endl;
            cout<<"Your name: "<<acc[idx].getname2()<<endl;
            cout<<"Your balance: "<<acc[idx].getbalance2()<<endl;
            cout<<"Your address: "<<acc[idx].getaddress2()<<endl;

            cout<<"Your mobile no: "<<acc[idx].getmobileno2()<<endl;
            cout<<"Your nid: "<<acc[idx].getnid2()<<endl;

            idx++;

            break;

        case 2:
            //send money
            cout<<endl;
            long long phoneno;
            cout<<"Enter your mobile no: ";
            cin>>phoneno;

            for(int i=0; i<100; i++)
            {
                if(acc[i].getmobileno2()==phoneno)
                {
                    tru=1;
                    string pass;
                    cout<<"Enter your pin: ";
                    cin>>pass;
                    if(pass==acc[i].getpin2())
                    {

                        cout<<"your infos before transaction : "<<endl;
                        cout<<"Your name: "<<acc[i].getname2()<<endl;

                        cout<<"Your mobile no: "<<acc[i].getmobileno2()<<endl;
                        cout<<"Your balance: "<<acc[i].getbalance2()<<endl;

                        cout<<endl;

                        long long mob;
                        cout<<"Enter the mobile no u want to transfer the money: ";
                        cin>>mob;
                        int src,dst=-1;
                        for(int j=0; j<100; j++)
                        {
                            if(mob==acc[j].getmobileno2())
                            {
                                src=i;
                                dst=j;
                                break;
                            }
                        }
                        if(dst==-1)
                        {
                            cout<<"Enter the phone no of a valid account"<<endl;
                        }
                        else
                        {
                            double monet;
                            cout<<"Enter amount of transaction: ";
                            cin>>monet;
                            if(acc[src].getbalance2()>=monet)
                            {

                                acc[src].setbalancedec(monet);
                                acc[dst].setbalanceinc(monet);

                                tr[trid].setval(monet,acc[src].getinfo2(),acc[dst].getinfo2());
                                tr[trid].getvalsrcoftrans();
                                tr[trid].getvaldestoftrans();

                                cout<<monet<<"TK has been sent from "<<acc[src].getmobileno2()<<"to : "<<acc[dst].getmobileno2()<<endl;

                                    trid++;
                            }

                            else
                            {
                                cout<<"Not enough money to transfer"<<endl;
                            }

                        }

                        cout<<"your infos after transaction : "<<endl;
                        cout<<"Your name: "<<acc[i].getname2()<<endl;
                        cout<<"Your mobile no: "<<acc[i].getmobileno2()<<endl;
                        cout<<"Your balance: "<<acc[i].getbalance2()<<endl;

                    }
                    else
                    {
                        cout<<"Invalid pin"<<endl;

                    }
                }
            }
            if(tru==0)
            {
                cout<<"No account for such mobile no"<<endl;
            }

            break;

        default:
            cout<<"choose a valid choice"<<endl;
        }
    }
    return 0;
}

