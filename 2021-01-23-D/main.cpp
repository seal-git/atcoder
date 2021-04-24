#include<bits/stdc++.h>
#include<iostream>
using namespace std;

/*
5
OR
AND
OR
AND
AND
4
AND
OR
AND
OR
3
AND
AND
OR
  */
long long pow_two(long long n){
	long long ans = 1;
	for(int i=0;i<n;i++){
		ans *= 2;
	}
	return ans;
}


int main(){
	int n;
	cin>>n;
	string s[n];
	for(int i=0;i<n;i++){
		cin>>s[i];
	}
	vector<long long> block;
	long long sub=1;
	//ANDで区切られたブロックごとの長さであるsubをblockに入れる
	for(int i=0;i<n;i++){
		if(s[i]=="OR"){
			sub++;
		}else{
			block.push_back(sub);
			sub = 1;
		}
		if(i==n-1){
			block.push_back(sub);
		}
	}
	long long ans = 0;
	long long zeros = 1;
	for(int i=0;i<block.size();i++){
		zeros *= pow_two(block[i])-1;
		cout<<block[i]<<" "<<zeros<<endl;
	}
	ans = pow_two(n+1)-zeros;

	cout<<ans<<endl;

	return 0;
}
