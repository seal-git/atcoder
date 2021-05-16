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
	vector<pair<int, string>> a(n);
	for(int i=0;i<n;i++){
		string s;
		int t;
		cin>>s>>t;
		pair<int, string> p = make_pair(t,s);
		a[i] = p;
	}
	sort(a.begin(), a.end());
	cout<<a[n-2].second<<endl;

}
