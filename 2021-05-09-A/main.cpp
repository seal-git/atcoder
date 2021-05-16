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
	long long t, n;
	cin>>t>>n;
	vector<long long> nums;
	nums.push_back(-1);
	long long tmp = 0;
	for(long long i=1;i<=200;i++){
		long long rst = (100+t)*i/100;
		if(rst!=tmp+1){
//			cout<<tmp+1<<" ";
//			if(nums.size()>0){
//				cout<<tmp+1-nums[nums.size()-1];
//			}
//			cout<<endl;
			nums.push_back(tmp+1);
		}
		tmp = rst;
	}
	long long syo = n/t;
	long long ama = n%t;
	long long  ans = syo*(100+t)-1;
	ans += nums[ama] - (-1);
	cout<<ans<<endl;





}
