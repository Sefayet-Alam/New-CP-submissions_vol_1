#include <iostream>
using namespace std;
 
 class ct2{
    int *a;
    public:
    ct2(int x){
        a=new int;
        *a=x;
    }
    ct2(const ct2 &o);
    ~ct2(){
        cout<<"destructor is called"<<endl;
        delete a;
    }
    void show(double y){
        cout<<y<<endl;
    }
    void show(float y){
         cout<<y<<endl;
    }

 };
ct2:: ct2(const ct2 &o){
      a=new int;
        a=o.a;
}

int main(){
    ct2 ob(4);
    ct2 ob1=ob;
    ob.show(10.00);
}
