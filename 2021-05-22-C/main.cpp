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
	vector<int>a(n);
	vector<int>b(n);
	vector<int>c(n);
	vector<pair<int,int>> p_a(n+1);
	vector<pair<int,int>> p_b(n+1);
	vector<pair<int,int>> p_c(n+1);
	for(int i=0;i<n+1;i++){
		p_a[i].first = i;
		p_a[i].second = 0;
	}
	for(int i=0;i<n+1;i++){
		p_b[i].first = i;
		p_b[i].second = 0;
	}
	for(int i=0;i<n+1;i++){
		p_c[i].first = i;
		p_c[i].second = 0;
	}

	for(int i=0;i<n;i++){
		cin>>a[i];
		p_a[a[i]].second++;
	}
	for(int i=0;i<n;i++){
		cin>>b[i];
		p_b[b[i]].second++;
	}
	for(int i=0;i<n;i++){
		cin>>c[i];
		p_c[b[c[i]-1]].second++;
	}
	long long ans = 0;
	for(int i=0;i<n+1;i++){
		ans += (long long)p_a[i].second*(long long)p_c[i].second;
	}
	cout<<ans<<endl;

}
