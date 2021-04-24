#include<bits/stdc++.h>
#include<iostream>
using namespace std;


int main(){
	int n;
	cin>>n;
	long long a[n];
	long long table[n][n];
	long long ans = 0;
	for(int i=0;i<n;i++){
		cin>>a[i];
		table[0][i] = a[i];
		ans = max(a[i],ans);
	}
	if(n==1){
		cout<<a[0]<<endl;
		return 0;
	}
	for(int r=1;r<n;r++){
		//tableのrowをうめていく
		for(int i=0;i<n-r;i++){
			table[r][i] = min(table[r-1][i],table[0][i+r]);
			ans = max(table[r][i]*(long long)(r+1),ans);
		}
	}
//	for(int i=0;i<n;i++){
//		for(int j=0;j<n-i;j++){
//			cout<<table[i][j];
//		}
//		cout<<endl;
//	}
	cout<<ans<<endl;

	return 0;
}
