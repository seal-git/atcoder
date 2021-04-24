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

#define ll long long
using namespace std;


int main(int argc, char* argv[]){
	int n;
	scanf("%d",&n);
	ll A[n];
	for(int i=0;i<n;i++){
		scanf("%lld",&A[i]);
	}
	int sagaku[n];
	sagaku[0] = 0;
	for(int i=1; i<n;i++){
		sagaku[i] = A[i]-A[i-1];
//		printf("%d\n",sagaku[i]);
	}
	int baibai[n];
	int state;

	if(sagaku[1]>sagaku[0]){
		baibai[0]=1;//買い
		state = 1;
	}else if(sagaku[1]==sagaku[0]){
		baibai[0]=0;
		state = -1;
	}else if(sagaku[1]<sagaku[0]){
		baibai[0]=0;
		state = -1;
	}
	for(int i=1; i<n-1; i++){
		if(state==1 && sagaku[i+1]>0){
			baibai[i] = 0;
		}else if(state==1 && sagaku[i+1]<0){
			baibai[i] = -1;//売り
			state = -1;
		}else if(state==-1 && sagaku[i+1]>0){
			baibai[i] = 1;//買い
			state = 1;
		}else if(state==-1 && sagaku[i+1]<0){
			baibai[i] = 0;
		}else{
			baibai[i] = 0;
		}
//		printf("b %d\n",baibai[i]);
	}
	if(state==1){
		baibai[n-1] = -1;
	}else if(state==1){
		baibai[n-1] = 0;
	}
	ll money = 1000;
	ll kabu = 0;
	for(int i=0; i<n; i++){
		if(baibai[i]==1){
			ll kabu_to_buy = money/A[i];
			kabu += kabu_to_buy;
			money -= A[i]*kabu_to_buy;
//			printf("%d %lld %d\n", baibai[i], money, kabu);
		}else if(baibai[i]==-1){
			ll kabu_to_sell = kabu;
			money += A[i]*kabu_to_sell;
			kabu = 0;
//			printf("%d %lld %d\n", baibai[i], money, kabu);
		}
	}
	printf("%lld\n",money);

}
