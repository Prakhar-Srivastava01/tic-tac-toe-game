// #include<iostream>
// using namespace std ;
// int main (){
//     int a = 10 ; 
//     int b = 20 ; 
//     cout<<"a + b =" <<" "<<a + b << endl ; 
//     cout<<" a % b ="<<" "<<a % b <<endl;
//     bool result = a>b || b>15 ;
//     cout<< "Show the result " << result<< endl;
//     return 0 ;
// }
#include <iostream>
using namespace std;
int main() {
int a = 7; // binary 0111
int b = 4; // binary 0100
cout << "a & b = " << (a & b) << endl; // 0100 -> 4
cout << "a | b = " << (a | b) << endl; // 0111 -> 7
cout << "a ^ b = " << (a ^ b) << endl; // 0011 -> 3
cout << "~a = " << (~a) << endl; // bitwise NOT
cout << "b << 1 = " << (b << 1) << endl; // left shift -> 8
cout << "b >> 1 = " << (b >> 1) << endl; // right shift -> 2
return 0 ; 
}