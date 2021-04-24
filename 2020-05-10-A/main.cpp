#include <iostream>
#include <string>
#include <stdio.h>
#include <math.h>
#include <string.h>
#include <queue>
using namespace std;

int main(int argc, char* argv[]){

	char S[15];
	char T[15];

	scanf("%s", S);
	scanf("%s", T);

	int len_s = (int)strlen(S);
//	printf("%d\n", len_s);

	int check = 0;
	for(int i=0; i<len_s; i++){
		if(S[i] != T[i]){
			check++;
			break;
		}
	}

	if(check == 0){
		printf("Yes\n");
	}else{
		printf("No\n");
	}


	return 0;
}



