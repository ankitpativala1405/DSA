#include <iostream>
using namespace std;
int main() {
    int n;
    cout<<"enter your number:";
    cin>>n;
    int sum=0;
        for(int j=1;j<=n*n;j++){
            if(j<=n || j>n*(n-1)){
                // cout<<j;
                sum+=j;
               
            }else{

            if(j%n==1 || j%n==0){
                // cout<<j;
                sum+=j;
            }else{
                // cout<<" ";
            }  }

            // if(j%n==0){
            //     cout<<endl;
            // }
           
        }
         cout<<"sum of border element:"<<sum;
    return 0;
}




