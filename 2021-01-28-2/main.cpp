#include<bits/stdc++.h>
#include<iostream>
using namespace std;


int main(){
	long long n;
	cin>>n;
	string s = to_string(n);
	int sum=0;
	for(int i=0;i<s.size();i++){
		sum += s[i]-'0';
	}
	long long m = 1;
	for(int i=0;i<s.size()-1;i++){
		m *= 10;
	}
	long long nn = m*(n/m)-1;
	string ss = to_string(nn);
//	cout<<ss<<endl;
	int ans = 0;
	for(int i=0;i<ss.size();i++){
		ans += ss[i]-'0';
	}
	cout<<max(ans,sum)<<endl;



	return 0;
}
