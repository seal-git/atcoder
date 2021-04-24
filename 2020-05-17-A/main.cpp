#include <iostream>
#include <string>
#include <stdio.h>
#include <math.h>
#include <queue>
using namespace std;

int main(int argc, char* argv[]){

	int N;
	int hon[5] ={2,4,5,7,9};
	int pon[4]={0,1,6,8};
	int bon = 3;

	scanf("%d", &N);

	for(int i=0; i<5; i++){
		if(N%10==hon[i]){
			printf("hon\n");
			break;
		}
	}
	for(int i=0; i<4; i++){
		if(N%10==pon[i]){
			printf("pon\n");
			break;
		}
	}
	if(N%10==bon){
		printf("bon\n");
	}

	return 0;
}





