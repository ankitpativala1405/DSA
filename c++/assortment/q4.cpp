
#include <iostream>
#include<vector>
using namespace std;

int main(){
    int row, column;

    cout << "Enter the array's row size:";
    cin >> row;

    cout << "Enter the array's column size:";
    cin >> column;

int a[row][column];

    cout << "Enter array's elements: ";
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < column; j++)
        {
            cout<<"a["<<i<<"]"<<"["<<j<<"]=";
            cin >> a[i][j];
        }
    }
    int rnum,cnum,rsum=0,csum=0;
    cout<<"enter row number=";
    cin>>rnum;
    for(int j=0;j<column;j++){
        if(rnum>row){
            cout<<"Invalid row number"<<endl;
            return 0;
        }else{
        rsum+=a[rnum][j];}
    }
    cout<<"sum of row="<<rsum<<endl;
    cout<<"enter column number=";
    cin>>cnum;
    for(int i=0;i<row;i++){
        if(cnum>column){
            cout<<"Invalid column number"<<endl;
            return 0;
        } else{
        csum+=a[i][cnum];}
    }
    cout<<"sum of column="<<csum<<endl;
}