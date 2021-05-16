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
	int k;
	long long n,m;
	cin>>k>>n>>m;
	vector<pair<int,int>> amari(k);
	vector<long long> ans(k);
	long long sum = 0;
	for(int i=0; i<k;i++){
		long long a;
		cin>>a;
		a *= m;
		if(a%n>n/2){
			ans[i] = a/n+1;
			sum += ans[i];
			amari[i] = make_pair(a%n - n, i);
		}else{
			ans[i] = a/n;
			sum += ans[i];
			amari[i] = make_pair(a%n, i);
		}
	}
	sort(amari.begin(), amari.end());
//	for(int i=0;i<k;i++){
//		cout<<amari[i].first<<" "<<amari[i].second<<endl;
//	}
	if(sum>m){
		//引いて調整→プラスの大きい順
		int sa = sum - m;
		for(int i=0; i<sa;i++){
			int idx = amari[i].second;
			ans[idx]--;
		}
	}else if(sum<m){
		//足して調整→マイナスの大きい順
		int sa = m - sum;
		for(int i=0; i<sa;i++){
			int idx = amari[amari.size()-i-1].second;
			ans[idx]++;
		}
	}
	for(int i=0;i<k;i++){
		cout<<ans[i]<<" ";
	}
	cout<<endl;
}
