#include <iostream>
#include <string>
#include <stdio.h>
#include <math.h>
using namespace std;

int main(int argc, char* argv[])
{
	char S[6];
	int flag = 0;

	scanf("%s", S);

	if(S[2] == S[3]){
		flag += 1;
	}
	if(S[4] == S[5]){
		flag += 1;
	}

	if(flag==2){
		printf("Yes\n");
	}else{
		printf("No\n");
	}
	return 0;
}



