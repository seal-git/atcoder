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
	vector<long long>r;
	vector<long long>g;
	vector<long long>b;
	vector<pair<long long, char>>a;
	for(int i=0;i<2*n;i++){
		long long ain;
		char c;
		cin >>ain>>c;
		pair<long long, char> p = make_pair(ain,c);
		a.push_back(p);
		if(c=='R'){
			r.push_back(ain);
		}
		if(c=='G'){
			g.push_back(ain);
		}
		if(c=='B'){
			b.push_back(ain);
		}
	}
	if(r.size()%2==0&&b.size()%2==0&&b.size()==0){
		cout<<0<<endl;
		return 0;
	}
	sort(a.begin(),a.end());
	long long ans1 = 0;
	for(int i=0; i<a.size(); i+=2){
		ans1 += a[i+1].first - a[i].first;
	}

	if(r.size()%2==0){
		sort(g.begin(),g.end());
		sort(b.begin(),b.end());

	}


}
