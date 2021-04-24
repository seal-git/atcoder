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
	int N;
	scanf("%d",&N);
	char str[N+100];
	scanf("%s", str);
//	printf("%s", str);

	int r_count = 0;
	for(int i=0;i<N;i++){
		if(str[i]=='R'){
			r_count++;
		}
	}
	int w_count = 0;
	for(int i=0; i<r_count;i++){
		if(str[i]=='W'){
			w_count++;
		}
	}
	printf("%d\n", w_count);




}
