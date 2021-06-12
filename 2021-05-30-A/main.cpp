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
	vector<pair<long long, long long>>a(n);
	vector<pair<long long, long long>>b(n);
	for(int i=0;i<n;i++){
		pair<long long, long long> p;
		long long f,s;
		cin>>f>>s;
		p = make_pair(f,i);
		a[i] = p;
		p = make_pair(s,i);
		b[i] = p;
	}
	sort(a.begin(),a.end());
	sort(b.begin(),b.end());


	vector<long long> ans;
	vector<pair<int,int>> ans_pair;
	pair<int,int> p;
	int f,s;
	ans.push_back(abs(a[0].first-a[a.size()-1].first));
	f = min(a[0].second, a[a.size()-1].second);
	s = max(a[0].second, a[a.size()-1].second);
	p = make_pair(f,s);
	ans_pair.push_back(p);
	ans.push_back(abs(a[1].first-a[a.size()-1].first));
	f = min(a[1].second, a[a.size()-1].second);
	s = max(a[1].second, a[a.size()-1].second);
	p = make_pair(a[1].second, a[a.size()-1].second);
	ans_pair.push_back(p);
	ans.push_back(abs(a[0].first-a[a.size()-2].first));
	f = min(a[0].second, a[a.size()-2].second);
	s = max(a[0].second, a[a.size()-2].second);
	p = make_pair(a[0].second, a[a.size()-2].second);
	ans_pair.push_back(p);
//	ans.push_back(abs(b[0].first-b[b.size()-1].first));
//	ans.push_back(abs(b[1].first-b[b.size()-1].first));
//	ans.push_back(abs(b[0].first-b[b.size()-2].first));

	int idx_i, idx_j;
	idx_i = min(b[0].second,b[n-1].second);
	idx_j = max(b[0].second,b[n-1].second);
	bool flag = true;
	for(int i=0;i<3;i++){
		if(ans_pair[i].first==idx_i&&ans_pair[i].second==idx_j){
			ans[i] = max(ans[i],abs(b[0].first-b[n-1].first));
			flag = false;
		}
	}
	if (flag==true){
		ans.push_back(abs(b[0].first-b[b.size()-1].first));
	}
	idx_i = min(b[1].second,b[n-1].second);
	idx_j = max(b[1].second,b[n-1].second);
	flag = true;
	for(int i=0;i<3;i++){
		if(ans_pair[i].first==idx_i&&ans_pair[i].second==idx_j){
			ans[i] = max(ans[i],abs(b[1].first-b[n-1].first));
			flag = false;
		}
	}
	if (flag==true){
		ans.push_back(abs(b[1].first-b[n-1].first));
	}
	idx_i = min(b[0].second,b[n-2].second);
	idx_j = max(b[0].second,b[n-2].second);
	flag = true;
	for(int i=0;i<3;i++){
		if(ans_pair[i].first==idx_i&&ans_pair[i].second==idx_j){
			ans[i] = max(ans[i],abs(b[0].first-b[n-2].first));
			flag = false;
		}
	}
	if (flag==true){
		ans.push_back(abs(b[0].first-b[n-2].first));
	}
	sort(ans.begin(),ans.end());
//	for(int i=0;i<ans.size();i++){
//		cout<<ans[i]<<endl;
//	}
	cout<<ans[ans.size()-2]<<endl;

}
