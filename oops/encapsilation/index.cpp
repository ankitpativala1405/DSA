#include  <iostream>
using namespace std;

class Bank{

    private:
    string name;
    int number;
    int amount;

    public:
    Bank(string name,int number){
        this->name=name;
        this->number=number;
        this->amount=0;
    }
    
    int printbal(){
        return amount;
    }



    void deposit(int amount){
        if(amount>0 && amount <=25000){
            this->amount+=amount;
        }else{
            cout<< "if your amount is less than 0 or greater than 25000 not allowed in once time"<<endl;
        }

    }

    void withdraw(int amount){
        if(this->isAmount(amount)){
            if(amount>0 && amount<20000){
            this->amount -= amount;
            cout << " amount withdrawal succesfully" << endl;
            }else{
                cout<<"please Enter amount upto 20000 "<<endl;
            }
            

        }else{
            cout<< "you have no balance for withdraw"<<endl;
        }
    }
    private:
    bool isAmount(int amount)
    {
        if (this->amount >= amount)
        {
            return true;
        }
        else
        {
            return false;
        }
    }


};
int main(){
    
  Bank *manthan=new Bank("manthan",878037045);
  manthan->deposit(25000);
//   manthan->withdraw(2000);
  manthan->deposit(25000);
  manthan->withdraw(19999);
  cout<<manthan->printbal()<<endl;
    return 0;
}