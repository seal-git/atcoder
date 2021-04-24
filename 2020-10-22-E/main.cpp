#include<bits/stdc++.h>
#include<iostream>
using namespace std;

class Tree{
public:
	Tree(int N){
		vector<int> nums(N);
		for int(i=0; i<N;)
	}

	Union(int i){

	}








}


int main(){
while(1){
	int W,H;
	cin >> W >> H;
	if(W==0&&H==0){
		break;
	}
	vector<vector<int>> M(H, vector<int>(W));
	for(int i=0; i<H; i++){
		for(int j=0; j<W; j++){
			cin >> M[i][j];
		}
	}
	/*
	for(int i=0; i<H; i++){
		for(int j=0; j<W; j++){
			cout << M[i][j];
		}
		cout << endl;
	}
	cout << endl;
*/
	tree t(H*W);
	for(int i=0; i<H; i++){
		for(int j=0; j<W; j++){
			if(M[i][j]==1){
				if(M[i-1][j-1]==1&&i-1>=0&&j-1>=0){
					t.union(i*W+j, (i-1)*W+j-1);
				}
				if(M[i-1][j]==1&&j-1>=0){
					t.union(i*W+j, (i-1)*W+j);
				}
				if(M[i-1][j+1]==1&&j+1<W){
					t.union(i*W+j, (i-1)*W+j+1);
				}
				if(M[i][j-1]==1&&j-1>=0){
					t.union(i*W+j, i*W+j-1);
				}
			}


		}
	}


}

return 0;
}
