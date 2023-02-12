#include<iostream>
using namespace std;

int main(){
int row,coln,n;
cout<<"Enter No of rows";
cin>>n;
for(row=0;row<n;row++){
    //if first row and last row hai to.
    if(row == 0 || row == n-1){
        for(coln=0; coln<n;coln++){
        cout<<"* ";
       }
    }
    else{
    //remaining  middle rows
       cout<<"* ";

       for(int i =0;i<n-2;i++){
           cout<<"  ";
        }
    cout<<"* ";
    }
    cout<<endl;
}
}

//output 

// * * * * * *
// *         *
// *         *
// *         *
// *         *
// * * * * * *