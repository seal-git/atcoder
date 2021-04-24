#include <iostream>
#include <string>
#include <stdio.h>
#include <math.h>
#include <queue>
using namespace std;

int main(int argc, char* argv[]){


	char S[1000005];
	for(int i=0; i<1000005; i++){
		S[i] = '0';
	}
	scanf("%s", S);

	int max=0;
	int i = 0;

	while(S[i] != '0'){
		int count_J = 0;
		int count_O = 0;
		int count_I = 0;

		//S[i] がJだったらJが何文字続くかカウント
		if(S[i] == 'J'){
			while(S[i] == 'J'){
				count_J++;
				i++;
			}
			//Jが続いた後にS[i]がOだったらOが何文字続くかカウント
			if(S[i] == 'O'){
				while(S[i] == 'O'){
					count_O++;
					i++;
				}
				//Oが続いた後にS[i]がIだったらIが何文字続くかカウント
				if(S[i] == 'I'){
					while(S[i] == 'I'){
						count_I++;
						i++;
					}
				}
			}
		}else{
			i++;
		}
		//J, O, Iが何文字続いたかチェックして条件を満たしたらmaxを更新
		if(count_O <= count_I && count_O <= count_J && count_O > max){
			max = count_O;
		}
	}

	printf("%d\n", max);

	return 0;
}



