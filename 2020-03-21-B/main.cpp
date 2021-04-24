#include <iostream>
#include <string>
#include <stdio.h>
#include <math.h>
using namespace std;

int main(int argc, char* argv[])
{
	string str;
	char S[99];
	scanf("%s", S);
	str = S;

	int flag = 0;
	int N = (int)str.length();
	int N_half = (N+1)/2;
//	printf("%d\n", N);

	if(N_half%2 == 0){
		int front = 0;
		int back = N_half-1-1;
		for (int i=0; i<N_half/2; i++){
//			printf("%c\n", S[front]);
//			printf("%c\n", S[back]);
			if(str[front] == str[back] &&
					str[front+N_half] == str[back+N_half] &&
					str[front] == str[front+N_half]){
				flag = 0;
			}else{
				flag = 1;
				break;
			}
			front += 1;
			back -= 1;
		}
	}

	if(N_half%2 == 1){
		int front = 0;
		int back = N_half-1-1;
		for (int i=0; i<(N_half-1)/2; i++){
//			printf("%c\n", S[front]);
//			printf("%c\n", S[back]);
			if(str[front] == str[back] &&
					str[front+N_half] == str[back+N_half] &&
					str[front] == str[front+N_half]){
				flag = 0;
			}else{
				flag = 1;
				break;
			}
			front += 1;
			back -= 1;
		}
	}

	if(flag == 0){
		printf("Yes\n");
	}else{
		printf("No\n");
	}

	return 0;
}



