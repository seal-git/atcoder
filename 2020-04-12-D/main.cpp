#include <iostream>
#include <string>
#include <stdio.h>
#include <math.h>
#include <queue>
using namespace std;

///これでは解けない

struct color_idx{
	int n;
	int color;
	int idx;
};

int get_near(int n, int color, int S[], int N){
	int i;
	for(i=n+1; i<N+1; i++){
		if(S[i] == color){
			break;
		}
	}
	if(i > N){
		i = -1;
	}
	return i;
}

int main(int argc, char* argv[])
{
	int N;
	scanf("%d", &N);
	char S[N];
	scanf("%s", S);

	int S_num[N];
	for(int i=0; i<N; i++){
		if(S[i] == 'R'){
			S_num[i] = 0;
		}else if(S[i] == 'G'){
			S_num[i] = 1;
		}else{
			S_num[i] = 2;
		}
	}
	color_idx S_color[N];
	int idx_RGB[3][N];
	int len_RGB[3]={0, 0, 0};

	for(int i=0;i<N;i++){
		for(int c=0; c<3; c++){
			if(S_num[i] == c){
				idx_RGB[c][len_RGB[c]] = i;
				S_color[i].n = i;
				S_color[i].color = c;
				S_color[i].idx = len_RGB[c];
				len_RGB[c]++;
			}
		}
	}

	int count=0;
	for(int i=0; i<N; i++){
		int color = S_num[i];
		int next_color = (color+1)%3;
		int next_next_color = (color+2)%3;
		//		printf("%d, %d\n", next_color, n);

		int next_color_n = get_near(i, next_color, S_num, N);
		int near_next_color_idx = S_color[next_color_n].idx;
		int next_next_color_n = get_near(i, next_next_color, S_num, N);
		int near_next_next_color_idx = S_color[next_next_color_n].idx;

		for(int j=near_next_color_idx; j<len_RGB[next_color]; j++){
			int next_color_n = idx_RGB[next_color][j];
			int near_next_next_color_n = get_near(next_color_n, next_next_color, S_num, N);
			int near_next_next_color_idx = S_color[near_next_next_color_n].idx;
			count += len_RGB[next_next_color] - near_next_next_color_idx;


		}


	}



	return 0;
}



