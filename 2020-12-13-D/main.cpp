#include<bits/stdc++.h>
#include<iostream>
using namespace std;


int main(){
	int N,M;
	cin>>N>>M;
	if(M==0){
		cout<<1<<endl;
		return 0;
	}
	vector<int>A(M);
	for(int i=0;i<M;i++){
		int a;
		cin>>a;
		A[i] = a-1;
	}
	sort(A.begin(),A.end());
	int min_d = A[0];
	cout<<min_d<<endl;
	for(int i=1;i<M;i++){
		min_d = min(A[i]-A[i-1],min_d);
		cout<<min_d<<endl;
	}
	if(N-A[M-1]-1!=0){
		min_d = min(min_d, N-A[M-1]-1);
	}
	cout<<min_d<<endl;
	return 0;
}
