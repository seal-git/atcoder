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
void regiter_group(int i, int j, vector<vector<int>>S, vector<pair<int,int>>group, int num){



}
search(group, next_regester);

int main(int argc, char* argv[]){
	int H, W;
	int Ch, Cw;
	int Dh, Dw;
	scanf("%d %d",&H,&W);
	scanf("%d %d",&Ch,&Cw);
	scanf("%d %d",&Dh,&Dw);
	char S_tmp[W];
	vector<vector <char>> S(W, vector<char>(H));
	for(int i=0; i<H; i++){
			scanf("%s",S_tmp);
			for(int j=0; j<W;j++){
				S[i][j] = S_tmp[j];
			}
	}

//	for(int i=0; i<H; i++){
//		for(int j=0; j<W;j++){
//			printf("%c", S[i][j]);
//		}
//		printf("\n");
//	}
	vector<vector<int>> distance(H, vector<int>(W));
	vector<pair<int, int>> group;
	vector<pair<int, int>> 	next_regester;
	regiter_group(i, j, S, group, num);
	search(group, next_regester);







}
