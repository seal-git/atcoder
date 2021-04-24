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
	vector <int>a(n);
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	sort(a.begin(),a.end());
	vector<int> new_a;
	new_a.push_back(a[0]);
	for(int i=1; i<n;i++){
		if(a[i-1]!=a[i]){
			new_a.push_back(a[i]);
		}
	}



}
