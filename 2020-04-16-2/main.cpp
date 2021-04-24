#include <iostream>
#include <string>
#include <stdio.h>
#include <math.h>
#include <queue>
using namespace std;

int main(int argc, char* argv[])
{
	int a[3];
	int min = 101;
	int sum = 0;

	for(int i=0; i<3; i++){
		scanf("%d", &a[i]);
		sum+=a[i];
		if(a[i] < min){
			min = a[i];
		}
	}
	printf("%d", sum-min);

	return 0;
}



