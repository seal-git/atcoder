#include<bits/stdc++.h>
#include<iostream>
using namespace std;

void make_catche(long long mod){
	long long a=1;
	cout<<"{1,"<<endl;
	for(long long i=1;i<mod;i++){
		a = a*i%mod;
		if(i%100000000==0){
			cout<<a<<","<<endl;
		}
	}
	cout<<"}"<<endl;
}

int main(){
	long long n;
	cin>>n;

	long long mod = 1000000007;
	make_catche(mod);

	if(n==0){
		cout<<1<<endl;
		return 0;
	}
	//nが1000000007以上ならXは0になる
	if(n>=mod){
		cout<<0<<endl;
		return 0;
	}

	long long catche_list[11]={1,
			927880474, //100000000!%mod
			933245637, //200000000!%mod
			668123525, //300000000!%mod
			429277690, //400000000!%mod
			733333339, //500000000!%mod
			724464507, //600000000!%mod
			957939114, //700000000!%mod
			203191898, //800000000!%mod
			586445753, //900000000!%mod
			698611116, //1000000000!%mod
			};

	//nを10^8で割った商がcatche_listのインデックスになり起点が求まる
	long long start = n/100000000;
	long long ans = catche_list[start];

	//起点から階乗の計算を始める
	for(long long i=start*100000000+1;i<=n;i++){
		ans = ans * i % mod;
	}
	cout<<ans<<endl;

	return 0;
}
