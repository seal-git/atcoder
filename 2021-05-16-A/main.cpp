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
#include<climits>
using namespace std;


int main(int argc, char* argv[]){
	long long n;
	cin>>n;
	if(n==1){
		cout<<1<<endl;
		return 0;
	}

	vector<long long> two;
	long long t = 1;
	two.push_back(t);
	long long ans_b = 1;
	for(int i=0;i<70;i++){
		t *= 2;
		if(t<n){
			ans_b = i+1;
		}
		if(t > n){
			break;
		}else{
			two.push_back(t);
		}
	}
	long long ans = LLONG_MAX;
	long long anss[3];
	while(1){
		//b固定
		for(long long ans_a = 0; ans_a*two[ans_b]<n;ans_a++){
			//a固定
			long long ans_c = n - ans_a*two[ans_b];
			 if(ans_a+ans_b+ans_c<ans){
				 ans = ans_a+ans_b+ans_c;
				 anss[0] = ans_a;
				 anss[1] = ans_b;
				 anss[2] = ans_c;
			 }
		}
	ans_b--;
	if(ans_b==ans_b/4*3){
			break;
		}
	}
	cout<<anss[0]<<" "<<anss[1]<<" "<<anss[2]<<endl;
	cout<<ans<<endl;
}
