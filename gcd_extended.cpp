
#include<bits/stdc++.h>
using namespace std;
class Triplet{
    public:
    int gcd;
    int x;
    int y;
    
}


int gcdExtendedEuclid(int a,int b){
    return gcdExtendedEuclid(b,a%b)
}


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