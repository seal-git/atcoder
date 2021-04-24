#include<bits/stdc++.h>
#include<iostream>
using namespace std;

long long pow_mod(long long a,long long b,long long p){
	if(b==0){
		return 1;
	}
	if(b%2==0){
		long long d = pow_mod(a,b/2,p);
		return d*d%p;
	}
	if(b%2==1){
		long long d = pow_mod(a,b-1,p);
		return a*d%p;
	}
}


int main(){
	long long N,M;
	cin>>N>>M;

	long long num=pow_mod(10,N,M*M);

	cout<<(num/M)%M<<endl;






	return 0;
}
