#include<bits/stdc++.h>
#include<iostream>
using namespace std;


int main(){
	int n;
	cin>>n;
	int a[n];
	int b[n];
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	for(int i=0;i<n;i++){
		cin>>b[i];
	}
	int sita = a[0];
	int ue = b[0];
	for(int i=1;i<n;i++){
		if(sita<a[i]){
			sita = a[i];
		}
		if(ue>b[i]){
			ue = b[i];
		}
	}
	cout<<max(0,ue-sita+1)<<endl;

	return 0;
}
