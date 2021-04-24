#include<bits/stdc++.h>
#include<iostream>
using namespace std;


int main(){
int n,x;
cin>>n>>x;
vector<int> a;
for(int i=0;i<n;i++){
	int num;
	cin>>num;
	if(num!=x){
		a.push_back(num);
	}
}
for(int i=0;i<a.size();i++){
	cout<<a[i]<<" ";
}
cout<<endl;

	return 0;
}
