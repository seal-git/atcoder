#include <iostream>
#include <string>
#include <stdio.h>
#include <math.h>
#include <queue>
#include <algorithm>
#include <utility>
using namespace std;

struct Node{
	vector<int> next;
	int depth=0;
	int visited=0;
	int type;
};
int get_path(vector<string> &s, int x, int y){
	queue<pair<int, int>> que;
	int depth_max=0;
	int H=s.size();
	int W=s[0].size();
	int depth[H][W];
	for(int i=0; i<H; i++){
		for(int j=0; j<W; j++){
			if(s[i][j]=='#'){
				depth[i][j]=-2;
			}
			else{
				depth[i][j]=-1;
			}
		}
	}
	que.push(make_pair(x, y));
	depth[x][y]=0;
	while(!que.empty()){
		pair<int, int>n = que.front();
		int nx=n.first;
		int ny=n.second;
//		printf("%d, %d\n", nx, ny);
		que.pop();
		if(depth_max<depth[nx][ny]) depth_max=depth[nx][ny];
		if(depth[nx+1][ny]==-1&&nx+1<=H-1){
			depth[nx+1][ny] = depth[nx][ny]+1;
			que.push(make_pair(nx+1, ny));
		}
		if(depth[nx-1][ny]==-1&&nx-1>=0){
			depth[nx-1][ny] = depth[nx][ny]+1;
			que.push(make_pair(nx-1, ny));
		}
		if(depth[nx][ny+1]==-1&&ny+1<=W-1){
			depth[nx][ny+1] = depth[nx][ny]+1;
			que.push(make_pair(nx, ny+1));
		}
		if(depth[nx][ny-1]==-1&&ny-1>=0){
			depth[nx][ny-1] = depth[nx][ny]+1;
			que.push(make_pair(nx, ny-1));
		}
	}
//		printf("%d,%d %d\n", x, y, depth_max);
	return depth_max;

	}

	int main(int argc, char* argv[]){

		int H, W;
		scanf("%d %d", &H, &W);
		vector<string> s(H);
		char input[W];
		for(int i=0; i<H; i++){
			scanf("%s", input);
			s[i] = input;
		}


		int max_path=0;
		for(int i=0; i<H; i++){
			for(int j=0; j<W; j++){

				if(s[i][j]=='.'){
					int path = get_path(s, i, j);
					if(path>max_path) max_path=path;
				}
			}
		}
		printf("%d\n", max_path);

		return 0;
	}





