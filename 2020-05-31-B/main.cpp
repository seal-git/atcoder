#include <iostream>
#include <string>
#include <stdio.h>
#include <math.h>
#include <queue>
#include <algorithm>
#include <utility>
using namespace std;


int main(int argc, char* argv[]){
	int N;
	scanf("%d", &N);
	long long A[N];
	long long ans=1;
	bool zero_flag=false;
	for(int i=0; i<N; i++){
		scanf("%lld", &A[i]);
		if(A[i]==0)zero_flag=true;
	}
	if(zero_flag){
		ans=0;
	}else{
		for(int i=0; i<N; i++){
			long long prev_ans=ans;
			ans*=A[i];
			if(ans/A[i] != prev_ans||ans>1000000000000000000||ans<0 || prev_ans>ans){
				ans=-1;
				break;
			}
		}
	}
	printf("%lld\n", ans);



	return 0;
}





