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
	long long nums[200];
	for(long long i=0;i<200;i++){
		nums[i] = 0;
	}
	for(int i=0;i<n;i++){
		cin>>a[i];
		long long mod = a[i]%200;
		nums[mod]++;
	}
	long long ans = 0;
	for(long long i=0;i<200;i++){
		if(nums[i]>=2){
			ans += nums[i] * (nums[i]-1) /2;
		}
	}
	cout<<ans<<endl;


}
