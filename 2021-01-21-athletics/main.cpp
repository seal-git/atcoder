#include<bits/stdc++.h>
#include<iostream>
using namespace std;


int main(){
	/*
	//キャッシュの作成
	long long num = 1;
	for(long long  i=1;i<24;i++){
		num += i*100000000;
		long long ans = 1;
		while(num>1){
			ans *= num%mod;
			ans %= mod;
			num -= 2;
		}
		cout<<ans<<","<<endl;
		num = 1;
	}
	*/

	long long n;
	long long  mod = 2147483647; //2.1e9
	cin>>n;

	//ｎがmodを超えたらn!%modは必ず0になる
	if (n>=mod){
		cout<<0<<endl;
		return 0;
	}

	//キャッシュリスト
	long long catche_list[24] = {
			1,
			1990824636,
			1280579681,
			707238267,
			1726549682,
			993526444,
			138078128,
			1767671842,
			1616396694,
			86152751,
			1767708855,
			1374408808,
			1428643780,
			644689303,
			1327894722,
			1552703678,
			1281328033,
			1572849052,
			601489020,
			1074566033,
			190249851,
			570981798,
			0,
			0,
	};

	//1e8で割った値ごとにキャッシュを取得する
	long long syo = n / 100000000;
	long long catche = catche_list[syo];
	long long ans = catche;
	cout<<syo<<endl;

	for(long long nn=syo*100000000+3;nn<=n;nn+=2){
		ans *= nn%mod;
		ans %= mod;
	}

	cout<<ans<<endl;
	return 0;
}
