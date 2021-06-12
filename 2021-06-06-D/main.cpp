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
	int n;
	cin>>n;
	vector<int> t(n);
	int sum = 0;
	for(int i=0;i<n;i++){
		cin>>t[i];
		sum += t[i];
	}
	int min_ans;
	if(sum%2==0){
		min_ans = sum/2;
	}else{
		min_ans = sum/2+1;
	}

	vector<int>g1;
	for(int bit=0;bit<(1<<n/2); bit++){
		int sum1 = 0;
		for(int i=0; i<n/2; i++){
			int mask = 1<<i;
			if(bit&mask){
				sum1 += t[i];
			}
		}
		g1.push_back(sum1);
	}
	vector<int>g2;
	for(int bit=0;bit<(1<<(n-n/2)); bit++){
		int sum2 = 0;
		for(int i=0; i<n-n/2; i++){
			int mask = 1<<i;
			if(bit&mask){
				sum2 += t[i+n/2];
			}
		}
		g2.push_back(sum2);
	}
	sort(g2.begin(), g2.end());
//	for(auto a:g1){
//		cout<<a<<endl;
//	}
//	for(auto a:g2){
//		cout<<a<<endl;
//	}
	int ans = 1000;
	for(int i=0;i <g1.size(); i++){
		int a = g1[i];
		if(min_ans-a>=0){
//			cout<<min_ans-a<<endl;
			int tmp_ans = a+ *lower_bound(g2.begin(), g2.end(), min_ans-a);
			if(tmp_ans>=min_ans){
				ans = min(ans, a+ *lower_bound(g2.begin(), g2.end(), min_ans-a));
			}
		}
	}
	cout<<ans<<endl;





}
