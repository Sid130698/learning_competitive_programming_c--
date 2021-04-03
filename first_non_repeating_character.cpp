#include<iostream>
#include<cstring>
#include<map>
using namespace std;

char nonRepeatingCharacter(string str){

    map<char,int> frequency;
    for(int i=0;i<str.length();i++){
        char currentchar=str[i];
        frequency[currentchar]++;
    }
    for(int i =0;i<str.length();i++){
        if(frequency[str[i]]==1){
            return str[i];
        }
    }
    return str[0];
}

int main(){
    char answer;
    string input;
    cin>>input;
    answer=nonRepeatingCharacter(input);
    cout<<answer;
    return 0;
}