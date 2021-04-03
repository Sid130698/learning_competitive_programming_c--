#include<iostream>
using namespace std;


bool check_prime(int n){
    for(int i=2;i*i<=n;i++){
        if(n%i==0)
        return false;
    }
    return true;
}

int main(){
    int n,count=0;
    cin>>n;
   for(int i=1;i<=n;i++){
       if(check_prime(i)){
           count++;
           cout<<i<<" ";
       }

   } 
   cout<<endl<<count;
    return 0;
}