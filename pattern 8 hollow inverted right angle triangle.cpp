#include<iostream>
using namespace std;
int main(){
    int row,col,n;
    cout<<"Enter No";
    cin>>n;
    for(row=0;row<n;row++){
        for(col=row+1;col<=n;col++){
           if(col == n || row == 0 || col == row+1 )
             { //cout<<col; 
                cout<<"* ";
                }
            else{
                cout<<"  ";
            } 
        }
        cout<<endl;
    }   
}

//-----------------------------------------------------

// 1 2 3 4 5 
// 2     5
// 3   5
// 4 5 
// 5