#include<bits/stdc++.h>
#include<iostream>
using namespace std;

long long comb(long long n,long long i){
	long long ans;
	if(n+1<i){
		i = (n+1)-(i-(n+1));
	}
	ans = i-1;
//	cout<<ans<<endl;
	return ans;
}

int main(){
	long long  n,k;
	cin>>n>>k;
	long long ans = 0;
	for (long long  i=2;i<=2*n;i++){
		if(2<=i-k&&i-k<=2*n){
//			cout<<"i-k:"<<i-k<<"i:"<<i<<endl;
			ans += comb(n,i-k) * comb(n,i);
		}

	}
	cout<<ans<<endl;

	return 0;
}
