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
	vector<int> yama;

	//	カード全回収
	for(int i=0;i<15;i++){
		for(int j=0;j<20;j++){
			if(i%2==0){
				if(D[i][j]>=0){
					exe+="I";
					yama.push_back(D[i][j]);
//					cout<<D[i][j]<<endl;
				}
			}else{
				if(D[i][19-j]>=0){
					exe+="I";
					yama.push_back(D[i][19-j]);
//					cout<<D[i][19-j]<<endl;
				}
			}
			if(i%2==0&&j!=19){
				exe+="R";
			}
			if(i%2==1&&j!=19){
				exe+="L";
			}
		}
		exe+="D";
	}
//	カード全配置
	for(int i=15;i<20;i++){
		for(int j=0;j<20;j++){
			if(i%2==0){
				if(D[i][j]==-1){
					exe+="O";
					D[i][j] = yama.back();
//					cout<<yama.back()<<endl;
					C[yama.back()].first = i;
					C[yama.back()].second = j;
					yama.pop_back();
				}
			}else{
				if(D[i][19-j]==-1){
					exe+="O";
					D[i][19-j] = yama.back();
//					cout<<yama.back()<<endl;
					C[yama.back()].first = i;
					C[yama.back()].second = 19-j;
					yama.pop_back();
				}
			}
			if(i%2==0&&j!=19){
				exe+="R";
			}
			if(i%2==1&&j!=19){
				exe+="L";
			}
		}
		if(i!=19)exe+="D";
	}
//0の位置に行く
	pair<int,int> now = make_pair(19,0);
	int x0 = C[0].first;
	int y0 = C[0].second;
//	cout<<x0<<" "<<y0<<endl;
//	cout<<C[0].first<<" "<<C[0].second<<endl;
	for(int i=0;i<now.first-x0;i++){
		exe+="U";
	}
	for(int i=0;i<y0-now.second;i++){
		exe+="R";
	}
	now.first = x0;
	now.second = y0;
	exe+="I";
	int target=1;
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


	cout<<exe<<endl;

}
