#include <iostream>
#include <string>
#include <stdio.h>
#include <math.h>
#include <queue>
#include <algorithm>
#include <utility>
using namespace std;


int main(int argc, char* argv[]){
	long long A;
	long double B;
	long long pows[7]={1000000000000000,
									100000000000000,
									10000000000000,
									1000000000000,
									100000000000,
									10000000000,
									1000000000};

	scanf("%lld %Lf", &A, &B);
	long long A_n[5];
	long long A_digit = A;
	for(int i=0; i<5;i++){
		A_n[i] = A_digit/pows[i];
		A_digit -= A_n[i]*pows[i];
	}
	long long A_left = A;
	for(int i=0; i<5;i++){
		A_left -= A_n[i]*pows[i];
	}
	long long B_100 = (long long)(B*100.0);

	long long B_n[5];
	for(int i=0; i<5;i++){
		B_n[i] = A_n[i] * B_100 * pows[i+2];
	}

	long double B_left_d = (long double)A_left*B;
	long long B_left_ll = (long long)B_left_d;

	long long ans = B_left_ll;
	for(int i=0; i<5;i++){
		ans += B_n[i];
	}
//	printf("%lld, %lld\n", B_100, A_left);
//	for(int i=0; i<5;i++){
//		printf("%lld %lld\n", A_n[i], B_n[i]);
//	}
//	printf("%lf\n", B_left_d);
	printf("%lld\n", ans);




	return 0;
}





