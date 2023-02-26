#include<iostream>
#include<bits\stdc++.h>
using namespace std;

class Studentinfo{
    private:
    int studentID;
    string name;
    float onlineMarks[5];
    public:
    Studentinfo(){
        //initializes the array to 0
        for(int i=0;i<5;i++){
            onlineMarks[i]=0;
        }
    }
    Studentinfo(string s,int id){
        //sets name and id
        name=s;
        studentID=id;
         //initializes the array to 0
        for(int i=0;i<5;i++){
            onlineMarks[i]=0;
        }
    }

    Studentinfo(string s,int id,float arr[]){
        //sets name and id
        name=s;
        studentID=id;
         //initializes the array to the given array
        for(int i=0;i<5;i++){
            onlineMarks[i]=arr[i];
        }
    }
    ~Studentinfo(){
        cout<<"Destructor is called"<<endl;
    }
    float bestthreeOnlinemarks(){
        sort(onlineMarks,onlineMarks+5);
        float sum=0;
        for(int i=2;i<5;i++){
            sum+=onlineMarks[i];
        }
        return sum;
    }
    void setinfo(string s,int id,float arr[]){
        name=s;
        studentID=id;
       for(int i=0;i<5;i++){
        onlineMarks[i]=arr[i];
       }
    }
    void printStudentInfo(){
        //printing all infos
        cout<<"Student Id: "<<" "<<studentID<<endl;
        cout<<"Student name: "<<" "<<name<<endl;
        cout<<"Student's Online marks: "<<endl;
        for(int i=0;i<5;i++){
            cout<<i+1<<" "<<"th test's mark: "<<" "<<onlineMarks[i]<<endl;
        }
    }
    float bestfourOnlinemarks(){
        sort(onlineMarks,onlineMarks+5);
        float sum=0;
        for(int i=1;i<5;i++){
            sum+=onlineMarks[i];
        }
        return sum;
    }
    float getTotal(){
        float sum=0;
        for(int i=0;i<5;i++){
            sum+=onlineMarks[i];
        }
        return sum;
    }
};

int calculateTotalMarks(Studentinfo &obj){
    int sum=0;
    return obj.getTotal();
}
int calculateTotalMarks(Studentinfo &obj,int n){
    if(n==3){
        //to get sum of best three
        return obj.bestthreeOnlinemarks();
    }
    else if(n==4){
        //to get sum of best four
        return obj.bestfourOnlinemarks();
    }
    else return obj.getTotal();//to get sum of all five
}
Studentinfo getBetterstudent(Studentinfo &st1,Studentinfo &st2){
    if(st1.getTotal()>st2.getTotal()) return st1;
    else return st2;
}
int main(){
    Studentinfo students[10];
    FILE *filePointer;
    string s;
    int id;
    float arr[5];
    ifstream fin("studentinfo.txt");
    if(fin.eof())
    {
        printf("studentinfo.txt file failed to open.");
    }
    else{
        for(int i=0;i<10;i++){
            fin>>s>>id;
            for(int i=0;i<5;i++){
                fin>>arr[i];
            }
            students[i].setinfo(s,id,arr);
        }
        
    }
    for(int i=0;i<10;i++){
        students[i].printStudentInfo();
    }
    cout<<"Banna's best 3 and best 4 online marks sum: "<<endl;
    cout<<students[0].bestthreeOnlinemarks()<<" "<<students[0].bestfourOnlinemarks()<<endl;
    cout<<"Who is better student? Banna or she?"<<endl;
    getBetterstudent(students[0],students[1]).printStudentInfo();

}
