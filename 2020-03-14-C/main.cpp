#include <iostream>
#include <string>
#include <stdio.h>
#include <math.h>
using namespace std;

int main(int argc, char* argv[])
{
	double a, b, c;
	scanf("%lf %lf %lf", &a, &b, &c);

	double left = sqrt(a) * sqrt(b);
	double right = (c-a-b) / 2.0;

	if(left < right){
		printf("Yes");
	}else{
		printf("No");
	}
	return 0;
}



