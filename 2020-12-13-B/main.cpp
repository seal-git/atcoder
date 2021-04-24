#include<bits/stdc++.h>
#include<iostream>
using namespace std;


int main(){
	long long N,M,T;
	cin >>N>>M>>T;
	long long A[M];
	long long B[M];
	for(int i=0;i<M;i++){
		cin>>A[i]>>B[i];
	}
	long long now = N-A[0];
	if(now<=0){
		cout<<"No"<<endl;
		return 0;
	}
	for(int i=0;i<M;i++){
		now = min(N,now+B[i]-A[i]);
//		cout << now<<endl;
		if(i!=M-1){
			now -= A[i+1]-B[i];
		}else{
			now -= T - B[i];
		}
//		cout << now<<endl;
		if(now<=0){
			cout<<"No"<<endl;
			return 0;
		}
	}
	cout<<"Yes"<<endl;

	return 0;
}
