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
	long long a[n];
	long long ans=0;
	long long now;
	for(int i=0;i<n;i++){
		cin>>a[i];
		if(i==0){
			now = a[i];
		}else if(now>a[i]){
			ans += now-a[i];
		}else{
			now = a[i];
		}
	}
	cout<<ans<<endl;

}
