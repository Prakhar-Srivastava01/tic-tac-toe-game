#include<iostream>
using namespace std ;
int main(){
    int i , j , n ;
    // int num = 1;
     cout<<"enter an number ";
    cin>>n;
    // for (i=0;i<n; i++){
    //     for (j=1;j<i+2;j++){
    //         cout<< j <<" " ;
    //     }
    // for(i=n ; i>0;i--){
    //     for (j=j+1 ; j>1;j--){
    //         cout<<j;
    //     } 
    // cout<<endl;
    // }

    for(i = 0 ; i< n ; i++){
        for(j=1;j<i+1;j++){
            cout<<" ";
            for(j=0;j<n-i;j++){
                cout<<i+1;
            }
            cout<<endl;
        }
    }
    }

   





// char num = '65 ';
// for( char i=0;i<n;i++) {
//     for(char j=0;j<i+1;j++){
//         cout<<num ; 
//         num++;
//     }
// }

 return 0 ;
}