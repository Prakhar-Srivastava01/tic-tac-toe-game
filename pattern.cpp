#include <iostream>
using namespace std;
int main()
{
    // first p..
    //     int n,i,j;
    //     cout<<"enter a value of n ";
    //     cin>>n;
    // i =1;
    // while(i<=n){
    //     j=1;
    //     while(j<=n){
    //         cout<<i;
    //         j=j+1;
    //     }
    //     cout<<endl;
    //     i=i+1;
    // }
    // 2nd p...

    // int i , j ,n ;
    // cout<<"enter a n ";
    // cin>>n;
    // i = 1 ;
    // while (i<= n ){
    //     j = 1 ;
    //     while(j<=n){
    //         cout<< "*";
    //         j=j+1;
    //     }
    //     i=i+1;
    //     cout<<endl;
    // }
    // // new 3

    // int i , j ,count, n;
    // cout<<"enter the number n ";
    // cin>>n;
    // i = 1 ;
    // while(i<=n){
    //     j=1;
    //     cout<<" "<<endl;
    //     while (j<=i){
    //          cout<<" "<<j;
    //         j=j+1;
    //     }
    //     i=i+1;
    // }

    // 3rd p..
    // int i,j,count,n;
    // cout<<"enter n ";
    // cin>>n;
    // count=1;
    // i = 1;
    // while (i<=n){
    //     j=1;
    //     while(j<=n){
    //         cout<<count<<" ";
    //         count = count + 1;
    //         j= j + 1;
    //     }
    //         cout<<endl;
    //         i=i+1;

    // }

    // 4th pattern star⭐⭐⭐⭐

    // int n,row , col;
    // cout <<"enter the n ";
    // cin>>n;
    // row = 1;
    // while(row<=n){
    //     col=1;
    //     while(col<row){
    //         cout<<" "<<" * ";
    //         col=col+1;
    //     }
    //     row = row+1;
    //      cout<<endl;
    // }

    // triangle
    // int n ,row, col,value;
    // cout<<"enter n ";
    // cin>>n;
    // row =1 ;
    // while(row<=n){
    //     col = 1;
    //     value = row ;
    //     while(col<=row){
    //         cout<<n-col+1;
    //         col =col +1;
    //     }
    //     cout<<endl;
    //     row=row+1;
    // }

    // int i,j ,n, vlu ;
    // cout<<"enter n ";
    // cin>>n;
    // i = 1;
    // while( i<=n){
    //     j=1;
    //     vlu=i;
    //     while(j<=i){
    //         cout<<" "<<vlu;
    //        vlu=vlu+1;
    //        j=j+1;
    //     }
    //     cout<<endl;
    //     i=i+1;

    // }

    // character A-Z;
    // int i,j,n,count ;
    // cout<<"enter n ";
    // cin>>n;
    // i=1;
    // while (i<=n){
    //     j=1;
    //     while(j<=i){
    //         char value = 'A'+i+j-2;
    //         cout<<" "<<value;
    //         j=j+1;
    //     }
    //     cout<<endl;
    //     i=i+1;
    // }

    // triangle shapes📐🔼🔽◀️▶️
    // int i ,j,n,space;
    // cout<<"enter n";
    // cin>>n;
    // i=1;
    // while(i<=n){
    //     space =n-i;
    //     while(space)
    // {
    //     cout<<" ";
    //     space=space-1;
    // }
    //     j=1;
    //     while(j<=i){
    //         cout<<"*";
    //         j=j+1;
    //     }
    //     cout<<endl;
    //     i=i+1;
    // }

    // int i ,j,n,space;
    // cout<<"enter n";
    // cin>>n;
    // i=1;
    // while(i<=n){
    //     space =n-i;
    //     while(space)
    // {
    //     cout<<" ";
    //     space=space-1;
    // }
    //     j=1;
    //     while(j<=i){
    //         cout<<i-j+1;
    //         j=j+1;
    //     }
    //     cout<<endl;
    //     i=i+1;
    // }
    

    // int i, j, n, space;
    // cout << "enter no . ";
    // cin >> n;
    // i=1;
    // while(i<=n){
    //     cout<< " ";
    //     j=1;

    //     while(j<=i){
    //         cout<<i+1-j;
    //         j=j+1;
    //     }
    //     cout<<endl;
    //     i=i+1;
    // }

int i,j,n;
    i = 1;
    while (i <= n)
    {
        int space=n-i;
        while(space)
        {
            cout << " ";
            space = space - 1;
        }
        j = 1;
        while (j <= i)
        {
            cout << j;
            j = j + 1;
        }
        int start = i - 1;
        while (start)
        {
            cout << start;
            start = start - 1;
        }
        cout << endl;
        i = i + 1;
    }


// mixup pattern

//  int i, j, n, space;
//     cout << "enter no . ";
//     cin >> n;
// i=1;
// while(i<=n){
//     j=1;
//     while(j<=i){
//         cout<<i-j+1;
//         j=j+1;
//     }
//     cout<<endl;
//     i=i+1;
// }

}
