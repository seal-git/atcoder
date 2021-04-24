#include<bits/stdc++.h>
#include<iostream>
using namespace std;


int main(){
	string s;
	cin>>s;
	string ss[6]={
			"abc","acb","bac","bca","cab","cba"
	};
	for(int i=0;i<6;i++){
		if(s==ss[i]){
			cout<<"Yes"<<endl;
			return 0;
		}
	}
	cout<<"No"<<endl;

	return 0;
}
