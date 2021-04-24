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
long long llpow(long long n, int a){
	long long r = 1;
	for(int i=0;i<a;i++){
		r*=n;
	}
	return r;
}
long long get_d(long long d, int xsize, long long m){
	m = (long double) m;
	xsize = (long double) xsize;
	d = pow(m, 1.0/xsize);
	return d;
}
int main(int argc, char* argv[]){
	string x;
	long long m;
	cin>>x>>m;
	int d_max = 0;
	for(int i=0;i<x.size();i++){
		d_max = max(x[i]-'0', d_max);
	}
	long long d = d_max + 1;
	d = get_d(d, x.size()-1, m);
	while(1){
		cout<<d<<endl;
		long long pow = 1;
		long long n = 0;
//		long long powmax = 9223372036854775807/d+1;
		for(long long i=x.size()-1;i>=0;i--){
			n += pow * (x[i]-'0');
//			if(powmax<pow){
//				goto here;
//			}
			pow *= d;
		}
		if(n<=m){
			cout<<n<<endl;
			goto here;
		}
		cout<<n<<endl;
		d--;
	}
here:
	long long  count = d - d_max;
	cout<<count<<endl;




}
