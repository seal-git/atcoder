#include<bits/stdc++.h>
#include<iostream>
using namespace std;


int main(){
int n;
cin>>n;
int a[n+1];
int p[n];
int ans = 0;
for(int i=0;i<n+1;i++){
	a[i] = i;
}
for(int i=0;i<n;i++){
	cin>>p[i];
	if(p[i]<=n){
		a[p[i]] = -1;
	}
	if(ans!=p[i]){
		cout<<ans<<endl;
	}else{
		for(int j=ans;j<n+1;j++){
			if(a[j]!=-1){
				ans = a[j];
				cout<<ans<<endl;
				break;
			}
		}
	}
}


	return 0;
}
