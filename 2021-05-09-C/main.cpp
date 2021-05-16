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
	vector<int> sosu;
	int nums[10001];
	for(int i=0;i<10000;i++){
		nums[i] = i;
	}
	nums[1] = 0;
	for(int i=0;i<10000;i++){
		if(nums[i]!=0){
			sosu.push_back(nums[i]);
			int idx = i+i;
			while(idx<10000){
				nums[idx] = 0;
				idx += i;
			}
		}
	}
//	for(int i=0;i<sosu.size();i++){
//		cout<<sosu[i]<<endl;
//	}
	vector<long long>ans(n);
	for(int i=0;i<n;i++){
		ans[i] = 1;
		for(int j=0;j<n;j++){
			if(i!=j){
				ans[i] *= sosu[j];
			}
		}
	}
	for(int i=0;i<n;i++){
		cout<<ans[i]<<" ";
	}
	cout<<endl;
}
