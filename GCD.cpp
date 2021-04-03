/*we are going to use EUCLIDS Algorithm,which is
GCD(a,b){a>b}=> GCD(b,a%b)
ex: GCD(16,10)=>GCD(10,6)=>GCD(6,4)=>GCD(4,2)=>GCD(2,0)=> 2 Ans.

*/
//time complexity=log2(max(a,b))

#include<bits/stdc++.h>
using namespace std;
// int gcd(int a,int b){
//     int high,low;
//     if(a>b){
//         high=a;
//         low=b;
//     }
//     else{
//         low=a;
//         high=b;
//     }
//     if(high%low==0){
//         return low;
//     }
//     else
//     gcd(low,high%low);
// }
 
 int gcd(int a,int b){
     if(a<b)
     return gcd(b,a);
     if(b==0)
     return a;
     return gcd(b,a%b);
 }
 int main(){

    int a,b;
    cin>>a>>b;
    int Gcd=gcd(a,b);
    cout<<Gcd;


    return 0;
 }