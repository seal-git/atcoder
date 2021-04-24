#include <iostream>
#include <string>
#include <stdio.h>
#include <math.h>
#include <queue>
using namespace std;

///long longにしないといけない

int main(int argc, char* argv[])
{
	int N;
	scanf("%d", &N);
	char S[N];
	scanf("%s", S);

	int S_num[N];
	long long len_RGB[3] = {0, 0, 0};

	for(int i=0; i<N; i++){
		if(S[i] == 'R'){
			S_num[i] = 0;
			len_RGB[0]+=1;
		}else if(S[i] == 'G'){
			S_num[i] = 1;
			len_RGB[1]+=1;
		}else{
			S_num[i] = 2;
			len_RGB[2]+=1;
		}
	}
	long long count=0;
	for(int i=0; i<N; i++){
		for(int d=1; d<N; d++){
			int j = i+d;
			int k = j+d;
			if(k > N-1){
				break;
			}
			if(S_num[i]!=S_num[j] && S_num[j]!=S_num[k] && S_num[k]!=S_num[i]){
//				printf("%d %d %d\n", i,j,k);
				count++;

			}
		}
	}
	long long y = len_RGB[0]*len_RGB[1]*len_RGB[2] - count;
	printf("%lld", y);

	return 0;
}



