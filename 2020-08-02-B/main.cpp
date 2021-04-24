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
 int N,D;
 scanf("%d %d",&N, &D);
 long long X[N];
 long long Y[N];
 for(int i=0;i<N;i++){
	 scanf("%lld %lld", &X[i], &Y[i]);
 }
 int count = 0;
 for(int i=0;i<N;i++){
	 long long kyori = X[i]*X[i] + Y[i]*Y[i];
	 if(kyori<=(long long)D*D){
		 count++;
	 }
 }
 printf("%d", count);



}
