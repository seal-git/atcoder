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
	int H,W;
	cin>>H>>W;
	int A[H][W];
	int min_block = 1000;
	for(int i=0;i<H;i++){
		for(int j=0;j<W;j++){
			cin>>A[i][j];
			min_block = min(A[i][j],min_block);
		}
	}
	int remove = 0;
	for(int i=0;i<H;i++){
		for(int j=0;j<W;j++){
			remove += A[i][j] - min_block;
		}
	}
	cout<<remove<<endl;




}
