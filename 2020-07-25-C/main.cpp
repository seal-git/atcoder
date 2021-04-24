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
	int n,k;
	scanf("%d %d",&n,&k);
	int A[n];
	for(int i=0;i<n;i++){
		scanf("%d",&A[i]);
	}
	for(int i=0;i<n-k;i++){
		int old_index = i;
		int new_index = i+k;
		if(A[old_index]<A[new_index]){
			printf("Yes\n");
		}else{
			printf("No\n");
		}
	}



}
