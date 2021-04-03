#include<iostream>
using namespace std;
int makeSieve(int n){
    int count=0;
     bool isPrime[n+1];
     for (int i=0;i<=n;i++){
         isPrime[i]=true;
     }
     isPrime[0]=false;
     isPrime[1]=false;

for(int i=2;i*i<=n;i++){
    if(isPrime[i]==true){
        for(int j=i*i;j<=n;j+=i){
        isPrime[j]=false;
        }
    }
    }
    for (int i=0;i<=n;i++){
        if(isPrime[i]==true){
            count++;
        }
    }
   return count;

}




int main(){
    int n;
    cin>> n;


   int nPrimes= makeSieve(n);
   cout<<nPrimes;
    return 0;

}