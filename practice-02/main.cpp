#include <iostream>
#include <string>
#include <stdio.h>
#include <math.h>
#include <queue>
using namespace std;


int main(int argc, char* argv[])
{
	int a, b;

	scanf("%d %d", &a, &b);

	int y = a * b;

	if(y % 2 == 0){
		printf("Even");
	}else{
		printf("Odd");
	}



	return 0;
}



