#include<iostream>
using namespace std;

int main(){
    int row ,col ,n,star,space;
    cout<<"Enter N";
    cin>>n;
    for(row=0;row<n;row++){

          for(space=0;space<n-row-1;space++){
                cout<<"  ";
            }
            for(star=0;star<(2*row+1);star++){
            
                cout<<" *";
            }
                cout<<endl;
        }
}
// tringle star shape.
// ----*
// ---***
// --*****
// -*******
// *********