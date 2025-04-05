#include<iostream>
using namespace std;

int add(int a,int b){
    return a+b;
}
int sub(int a,int b){
    return a-b;
}
int multi(int a,int b){
    return a*b;
}
int divi(int a,int b){
    return a/b;
}
int modul(int a,int b){
    return a%b;
}

int main(){
    int choice,n1,n2;
    char ychoice;

    do
    {
        cout<<"Press 1 for +"<<endl;
        cout<<"Press 2 for -"<<endl;
        cout<<"Press 3 for *"<<endl;
        cout<<"Press 4 for /"<<endl;
        cout<<"Press 5 for %"<<endl;
        cout<<"Press 0 for the exit"<<endl;

        cout<<"Enter your choice:";
        cin>>choice;

        if(choice==0){
            break;
        }
        cout<<"Enter the fist number:";
        cin>>n1;
        cout<<"Enter the second number:";
        cin>>n2;

        switch (choice)
        {
        case 1:
            cout<<"Addition of " <<n1<< " and "<< n2<<" is:"<<add(n1,n2)<<endl;
            break;
        case 2:
            cout<<"Subtraction of " <<n1<< " and "<< n2<<" is:"<<sub(n1,n2)<<endl;
            break;
        case 3:
            cout<<"Multiplication of " <<n1<< " and "<< n2<<" is:"<<multi(n1,n2)<<endl;
            break;
        case 4:
            cout<<"Division of " <<n1<< " and "<< n2<<" is:"<<divi(n1,n2)<<endl;
            break;
        case 5:
            cout<<"Modulus of " <<n1<< " and "<< n2<<" is:"<<modul(n1,n2)<<endl;
            break;
        
        default:
            cout<<"Invalid choice!";    
            break;
        }
        cout<<"do you want to do anoter arithmetic operations(y/n):";
        cin>>ychoice;

    } while (ychoice=='y');
    
}