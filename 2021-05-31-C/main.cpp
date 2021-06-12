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
	long long n,k;
	cin>>n>>k;
	vector<pair<long long,long long>> ab(n);
	for(long long i=0;i<n;i++){
		long long a,b;
		cin>>a>>b;
		pair<long long, long long> p = make_pair(a,b);
		ab[i] = p;
	}
	sort(ab.begin(), ab.end());
	long long now = 0;
	long long idx = 0;
	while(1){
		long long next = ab[idx].first;
		if(k >= next - now){
			k -= next - now;
			now = next;
			k += ab[idx].second;
			idx++;
		}else{
			now += k;
			break;
		}
//		cout<<now<<" "<<k<<endl;
		if(idx==n){
			now += k;
			break;
		}
	}
	cout<<now<<endl;



}
