#include <iostream>
#include <string>
#include <stdio.h>
#include <math.h>
#include <queue>
using namespace std;

int get_digit_sum(int N){
	int digit;
	int digit_sum = 0;
	while(N){
		digit = N % 10;
		N = N / 10;
		digit_sum += digit;
	}
	return digit_sum;
	}
int main(int argc, char* argv[]){
	int N, A, B;

	scanf("%d %d %d",
			&N, &A, &B);

	int N_sum = 0;
	for(int i=1; i<N+1; i++){
		int digit_sum = get_digit_sum(i);
//		printf("%d\n", digit_sum);
		if(digit_sum >= A){
			if(digit_sum <= B){
				N_sum += i;
			}
		}
	}

	printf("%d", N_sum);
	return 0;
}



