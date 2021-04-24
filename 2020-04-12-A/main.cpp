#include <iostream>
#include <string>
#include <stdio.h>
#include <math.h>
#include <queue>
using namespace std;


int main(int argc, char* argv[])
{
	char N[3];
	scanf("%s", N);

	int flag = 0;
	for(int i; i<3; i++){
		if(N[i] == '7'){
			flag = 1;
			break;
		}
	}

	if(flag==1){
		printf("Yes");
	}else{
		printf("No");
	}

	return 0;
}



