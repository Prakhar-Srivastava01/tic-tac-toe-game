#include<iostream>
using namespace std;
int main(){
    // int a ,b ,c ;
    // cout<<"enter value of a is :" <<endl;
    //  cin>>a;
    //  cout<<"enter second value is :" <<endl;
    //  cin>>b;
    //  cout<<"enter third value is :" <<endl;
    //  cin>>c;
    //  int add = a+b+c;
    //  cout <<"the add of three number is :"<<add<<endl;
    //  if (100<=add >= 40 ){
    //     cout<<"the number is 40+";
    //  }
    //  else if(300<add>100)
    //  {
    //     cout<<"the number is hundred plus ";
    //  }
    // else if (300<=add<=500){
    //     cout<<"valid number";
    //  }
    //  else{
    //     cout<<" the number is invalid ";
    //  }
 
    
    int n;
    cout<<"enter number n _ ";
    cin>>n;
    int i=1;
    while(i<n){
        if (n%i==0){
         cout<<"not prime "<<endl;
        }
        else
        {
            
            cout<<" prime "<<endl;
         }
         break ; 
        i =i+1 ;
    }    
}



