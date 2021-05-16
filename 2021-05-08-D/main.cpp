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
	if(n>=8){
		n = 8;
		vector<int> a(8);
		for(int i=0;i<8;i++){
			cin>>a[i];
		}
	}else{
		vector<int> a;
		for(int i=0;i<n;i++){
			int num;
			cin>>num;
			a.push_back(num);
		}
	}

	vector<vector <int>> mods(200, vector<int>(0));











}
