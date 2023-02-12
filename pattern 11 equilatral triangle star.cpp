#include<iostream>
using namespace std;
int main(){
    int row,col,n;
    cout<<"enter n";
    cin>>n;
    for(row=0;row<n;row++){
        for(col=0;col<n-row-1;col++){
            cout<<"  ";
        }
        for(col=0;col<row+1;col++){
            cout<<"-*";
            cout<<"--";
        }
        cout<<endl;
    }
}

// inverted star triangle pattern.
//-------------------------------------------
// int main(){
//     int row,col,n;
//     cout<<"enter n";
//     cin>>n;
//     for(row=0;row<n;row++){
//         for(col=0;col<row;col++){
//             cout<<"  ";
//         }
//         for(col=0;col<n-row;col++){
//             cout<<" *";
//             cout<<"  ";
//         }
//         cout<<endl;
//     }
// }