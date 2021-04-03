#include<iostream>
#include<vector>
#include<set>
using namespace std;

vector<int> remove_duplicates(vector<int> input){
	set<int> s;
	vector<int> result;
	for(int i=0;i<input.size();i++){
		if(s.find(input[i])==s.end()){
			s.insert(input[i]);
			result.push_back(input[i]);
		}
	}
	return result;
}








int main(){
	int n,element;
	vector<int> input;
	vector<int> result;
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>element;
		input.push_back(element);
	}
	result=remove_duplicates(input);
	for(int i=0;i<result.size();i++)
	cout<<result[i]<<" ";

}
