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
	int x1, y1, r, x2, y2, x3, y3;
	scanf("%d %d %d", &x1, &y1, &r);
	scanf("%d %d %d %d", &x2, &y2, &x3, &y3);

	vector<pair<int,int>> corners(4);
	pair<int,int> corner0 = make_pair(x2, y3);
	pair<int,int> corner1 = make_pair(x3, y3);
	pair<int,int> corner2 = make_pair(x3, y2);
	pair<int,int> corner3 = make_pair(x2, y2);
	corners[0] = corner0;
	corners[1] = corner1;
	corners[2] = corner2;
	corners[3] = corner3;

	bool flag1 = 1;
	bool flag2 = 1;

	for(int i=0; i<4; i++){
		int d = (corners[i].first-x1)*(corners[i].first-x1)+(corners[i].second-y1)*(corners[i].second-y1);
		if(d>r*r){
			flag1 = 0;
			break;
		}
	}

	vector<pair<int,int>> c_corners(4);
	pair<int,int> c_corner0 = make_pair(x2, x1-r );
	pair<int,int> c_corner1 = make_pair(y1+r, y3);
	pair<int,int> c_corner2 = make_pair(x1+r, x3);
	pair<int,int> c_corner3 = make_pair(y2, y1-r);
	c_corners[0] = c_corner0;
	c_corners[1] = c_corner1;
	c_corners[2] = c_corner2;
	c_corners[3] = c_corner3;


	for(int i=0; i<4; i++){
		if(c_corners[i].first>c_corners[i].second){
			flag2 = 0;
			break;
		}
	}
	if(flag1){
		printf("YES\nNO\n");
	}else if(flag2){
		printf("NO\nYES\n");
	}else{
		printf("YES\nYES\n");
	}
	return 0;
}
