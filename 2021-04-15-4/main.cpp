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
	int n,x;
	cin>>n>>x;
	vector<int> a(n);
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	sort(a.begin(),a.end());
	int num = 0;
	int ans;
	for(int i=0;i<n;i++){
		num += a[i];
		if(num>x){
			ans = max(i-1,0);
			break;
		}else if(num==x){
			ans = i+1;
			break;
		}
		ans = i;
	}
	cout<<ans<<endl;


}
