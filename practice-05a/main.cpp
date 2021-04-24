#include <iostream>
#include <string>
#include <stdio.h>
#include <math.h>
#include <queue>
using namespace std;


int main(int argc, char* argv[])
{
	int A, B, C, X;

	scanf("%d %d %d %d",
			&A, &B, &C, &X);

	int money;
	int count=0;

	for(int i=0; i<A+1; i++){
		for(int j=0; j<B+1; j++){
			for(int k=0; k<C+1; k++){
				money = 500*i + 100*j + 50*k;
				if(money == X){
					count++;
				}
			}
		}
	}

printf("%d", count);

	return 0;
}



