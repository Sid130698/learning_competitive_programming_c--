/* we assume that the height h is given and h-1  height binary tree can have x number of balanced binary trees
possible this will go recursively to a tree with height 1 and we know here h=1 and x =1...
we also know that a h height tree must have h-1 and h-2 as left ride side 


given Modulo=10^9+7

*/
#include<bits/stdc++.h>
using namespace std;
int find_num_bin_trees(int h){
if(h==0||h==1){
    return 1;
}
int m=pow(10,9)+7;
int x=find_num_bin_trees(h-1);
int y=find_num_bin_trees(h-2);

long res1=(long)x*x;
long res2=(long)x*y*2;
int ans1=(int) (res1%m);
int ans2=(int)(res2%m);

int ans=(ans1+ans2)%m;
return ans;


}




 int main(){
    int h;
    cin>>h;
    int nTrees=find_num_bin_trees(h);
    cout<<nTrees;


    return 0;
 }