#include <iostream>
using namespace std;

class A{
    public:

    string name;

    A(string name){


        this->name = name;
    }
    void print(){
        cout << "Class A->" <<this->name<< endl;
    }
};

class B : public A{
    public:
    B(string name) : A(name) {
    }
    void  test(){
        cout << "Class B's test function" << endl;
    }
};

int main() {
    B*a=new B("ankit");
    a->print(); 
    // a->test();

    return 0;
}