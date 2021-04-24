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
	int n,m;
	cin>>n>>m;
	int miti[n]={0};
	for(int i=0;i<m;i++){
		int a,b;
		cin>>a>>b;
		miti[a-1]++;
		miti[b-1]++;
	}
	for(int i=0;i<n;i++){
		cout<<miti[i]<<endl;
	}


}
