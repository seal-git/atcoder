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
	int a,b;
	cin>>a>>b;
	vector<int>ans;
	if(a>=b){
		int sum = 0;
		for(int i=1;i<a+1;i++){
			ans.push_back(i);
			sum+=i;
		}
		sum *= -1;
		ans.push_back(sum);
		for(int i=1;i<b;i++){
			ans[a] += i;
			ans.push_back(i*-1);
		}
	}else{
		int sum = 0;
		for(int i=1;i<b+1;i++){
			ans.push_back(-1*i);
			sum+=i;
		}
		ans.push_back(sum);
		for(int i=1;i<a;i++){
			ans[b] -= i;
			ans.push_back(i);
		}
	}
	for(int i=0;i<ans.size();i++){
		cout<<ans[i]<<" ";
	}
	cout<<endl;
}
