#include <iostream>
#include <string>
#include <stdio.h>
#include <math.h>
using namespace std;

int main(int argc, char* argv[])
{

	int X;
	int a;
	int b;
	int y;
	scanf("%d", &X);

	a = (X - X%500) / 500;
	b = (X%500 - (X%500)%5) / 5;

	y = a * 1000 + b * 5;
	printf("%d\n", y);
	return 0;
}



