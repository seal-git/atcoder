#include<bits/stdc++.h>
#include<iostream>
using namespace std;


int main(){
int S;
cin >>S;
long long ans_table[2005];
ans_table[0] = 0;
ans_table[1] = 0;
ans_table[2] = 0;
ans_table[3] = 1;
ans_table[4] = 1;
ans_table[5] = 1;
ans_table[6] = 2;
ans_table[7] = 3;

if(S<8){
	cout<<ans_table[S]<<endl;
	return 0;
}
long long mod = 1000000007;
for(int i=8;i<S+1;i++){
	ans_table[i] = 1;
	for(int j=3;j<=i-3;j++){
//		cout<<j<<" "<<i-j<<" "<<ans_table[i-j]<<endl;
		ans_table[i] += ans_table[i-j];
		ans_table[i] %= mod;
	}
//	cout<<ans_table[i]<<endl;
}
cout<<ans_table[S]<<endl;
	return 0;
}
