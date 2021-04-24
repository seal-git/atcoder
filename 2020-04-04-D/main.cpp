#include <iostream>
#include <string>
#include <stdio.h>
#include <math.h>
#include <queue>
using namespace std;


int main(int argc, char* argv[])
{
	int K;
	scanf("%d", &K);

	queue<long long> A;

	for(long long i=0; i<9; i++){
		A.push(i+1);
	}

	for(int i=0; i<K-1; i++){
		long long x = A.front();
		if(x%10 == 0){
			A.push(x * 10 + 0);
			A.push(x * 10 + 1);
		}else if(x%10 == 9){
			A.push(x * 10 + 8);
			A.push(x * 10 + 9);
		}else{
			A.push(x * 10 + x%10 - 1);
			A.push(x * 10 + x%10 + 0);
			A.push(x * 10 + x%10 + 1);
		}
		A.pop();
	}

	long long y = A.front();


	printf("%lld\n",y);


	return 0;
}



