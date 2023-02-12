#include<iostream>
using namespace std;


int main(){
    int row ,col ,n,star,space;
    cout<<"Enter N";
    cin>>n;
    for(row=0;row<n;row++){
        int k=0;  //for star int k initialize
        for(col=0;col<(2*n-1);col++){ //column 11 tak chal rha hai.
            if(col<n-row-1){
                cout<<"  ";
            }
            else if (k < (2 * row+1)){  
                if(k == 0 || k == (2* row) || row == n-1){
                   cout<<" *";
                }
                else
                    cout<<"  "; 
                k++;

            }
            else{
                   cout<<"  ";
            }  
        }
        cout<<endl;
    }         
}