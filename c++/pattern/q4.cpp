#include <iostream>
using namespace std;
int main() {
    int n;
    cin>>n;
     int m=n*n;
        for(int j=1;j<=m;j++){
            // cout<<j;
            if(j<=n || j>=n*(n-1)){
                cout<<j;
            }else{

            if(j%n==1 || j%n==0){
                cout<<j;
            }else{
                cout<<" ";
            }  }

            if(j%n==0){
                cout<<endl;
            }
           
        }
    return 0;
}
