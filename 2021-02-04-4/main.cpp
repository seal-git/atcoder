#include<bits/stdc++.h>
#include<iostream>
using namespace std;


int main(){
	int n;
	string s;
	cin>>n>>s;
	int alphabet[26];
	for(int i=0;i<26;i++){
		alphabet[i] = 1;
	}
	for(int i=0;i<n;i++){
		int letter = s[i]-'a';
		alphabet[letter] += 1;
	}
	long long ans=1;
	long long mod = 100000007;
	for(int i=0; i<26;i++){
		ans *= alphabet[i];
		ans %= mod;
	}
	cout<<ans-1<<endl;




	return 0;
}
