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
	vector <pair<int,int>> C(100);
	vector<vector<int>> D(20,vector<int>(20,-1));
	for(int i=0;i<100;i++){
		int x,y;
		cin >> x>>y;
		C[i] = make_pair(x,y);
		D[x][y] = i;
	}
	string exe = "";
	pair<int,int> now = make_pair(0,0);
	int target = 0;
	while(target<100){
		pair<int,int> diff = make_pair(C[target].first-now.first, C[target].second-now.second);
		if(diff.first>=0){
			for(int i=0;i<diff.first;i++){
				exe+="D";
			}
		}else{
			for(int i=0;i<abs(diff.first);i++){
				exe+="U";
			}
		}
		if(diff.second>=0){
			for(int i=0;i<diff.second;i++){
				exe+="R";
			}
		}else{
			for(int i=0;i<abs(diff.second);i++){
				exe+="L";
			}
		}
		exe += "I";
		now = C[target];
		target++;
	}
	cout <<exe<<endl;

}
