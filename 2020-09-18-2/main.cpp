#include<bits/stdc++.h>
#include<iostream>
using namespace std;

int calc_gcd(long long q, long long p){
	if(q%p==0){
		return p;
	}else{
		long long r = q%p;
		calc_gcd(p,r);
	}
}


int main(){

	long long  p,q;
	cin >> p >> q;
	auto gcd = calc_gcd(p,q);

	auto q_gcd = q/gcd;

	auto num = q_gcd;
	for(long long i=2; i*i<=q_gcd; i++){
		if(num%i==0){
			while(num%i==0){
				num /= i;
			}
			num *= i;
		}
	}

	cout << num << endl;

	return 0;
}
