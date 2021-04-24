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
#include <set>
using namespace std;

bool tagaso(long long a,long long b, vector<long long> sosu){
	bool flag = false;
	for(long long i=0;i<sosu.size();i++){
		if(a%sosu[i]==0&&b%sosu[i]==0){
			flag = true;
			break;
		}
	}
//	cout<<a<<" "<<b<<" "<<flag<<endl;
	return flag;
}

int main(int argc, char* argv[]){
long long n;
cin>>n;
long long a[n];
for(long long i=0;i<n;i++){
	cin>>a[i];
}

set<long long> soinsu;
vector<long long> sosu;
vector<long long> kazu;
for(long long i=1;i<=50;i++){
	kazu.push_back(i);
}
//素数列挙
for(long long i=1;i<kazu.size();i++){
	if(kazu[i]!=-1){
		sosu.push_back(kazu[i]);
		for(long long j=i+kazu[i];j<kazu.size();j+=kazu[i]){
			kazu[j] = -1;
		}
	}
}
//aから素数とその倍数を抜く
for(long long i=0;i<sosu.size();i++){
	for(long long j=0;j<n;j++){
		if(sosu[i] == a[j]){
			soinsu.insert(sosu[i]);
			for(long long k=0;k<n;k++){
				if(a[k]%sosu[i]==0){
					a[k]=-1;
				}
			}
		}
	}
}


long long ans=1;
//素数をまず総積
for(auto x: soinsu){
	ans *= x;
}


vector<long long>nokori;
//残りの合成数の処理
for(long long i=0;i<n;i++){
	if(a[i]>0){
		nokori.push_back(a[i]);
	}
}
//残りがないなら終了
if(nokori.size()==0){
	cout<<ans<<endl;
	return 0;
}

//残りから互いに素な最小のものを見つける
for(long long i=2;i<100000;i++){
	bool flag = true;
	for(long long j=0;j<nokori.size();j++){
		if(tagaso(nokori[j],i, sosu)==false){
			flag = false;
			break;
		}
	}
	if(flag == true){
		ans *= i;
		break;
	}
}


cout<<ans<<endl;

}
