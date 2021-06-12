#include <iostream>
#include <string>
#include <stdio.h>
#include <math.h>
#include <queue>
#include <algorithm>
#include <utility>
#include <vector>
#include <tuple>
#include <numeric>
using namespace std;


int main(int argc, char* argv[]){
	long long n;
	cin>>n;
	long long a[n];
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	if(n==1){
		cout<<a[0]<<endl;
		return 0;
	}
	if(n==2){
		cout<<a[0]*2<<endl;
		return 0;
	}
	long long dp_p[n];
	long long dp_m[n];
	long long fi[n];
	long long mod = 1000000007;

	dp_p[0] = a[0];
	dp_m[0] = a[0];
	dp_p[1] = dp_p[0]+a[1];
	dp_m[1] = dp_m[0]-a[1];
	fi[0] = 1;
	fi[1] = 1;

	for(int i=2;i<n;i++){
		fi[i] = (fi[i-1] + fi[i-2])%mod;
		dp_p[i] = dp_p[i-1]+a[i]*fi[i-1]+dp_m[i-1]+a[i]*fi[i-2];
		dp_m[i] = dp_p[i-1]-a[i]*fi[i-1];
		if(dp_p[i]>0){
			dp_p[i] %= mod;
		}else{
			dp_p[i] = mod-(-dp_p[i]%mod);
		}
		if(dp_m[i]>0){
			dp_m[i] %= mod;
		}else{
			dp_m[i] = mod-(-dp_m[i]%mod);
		}

//		cout<<dp_p[i]<<" "<<dp_m[i]<<endl;
	}
	cout<<(dp_p[n-1]+dp_m[n-1])%mod<<endl;




}
