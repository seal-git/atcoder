#include<bits/stdc++.h>
#include<iostream>
using namespace std;


int main(){
	int n;
	int x;
	cin>>n>>x;
	x = x*100;
	int v[n];
	int p[n];
	for(int i=0;i<n;i++){
		cin>>v[i]>>p[i];
	}
	int alc=0.0;
	for(int i=0;i<n;i++){
		alc += v[i]*p[i];
		if(alc>x){
			cout<<i+1<<endl;
			return 0;
		}
	}
	cout<<-1<<endl;

	return 0;
}
