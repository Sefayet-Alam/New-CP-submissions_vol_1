#include<iostream>

using namespace std;

class Base {
public:
    Base(){
        cout << "Constructor from base class" << endl;
    }
};

class FirstDerived : public Base {
  public:
    FirstDerived(){
        cout << "Constructor from first derived class" << endl;
    }
};

class SecondDerived : public Base {
    public:
    SecondDerived(){
         cout << "Constructor from Second derived class" << endl;
    }
};

class ThirdDerived : public FirstDerived, public SecondDerived {
    public:
    ThirdDerived(){
         cout << "Constructor from third derived class" << endl;
    }
};

int main() {
   ThirdDerived obj;
    return 0;
}
/*
Hierarchy:
    .....Base.....
    ^           ^ 
    |           |
FirstDerived   SeconDerived
    ^           ^
    |           |
    ThirdDerived
*/
