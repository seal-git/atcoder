#include <iostream>
#include <string>
#include <stdio.h>
#include <math.h>
#include <queue>
using namespace std;

int get_gcd(int a, int b){
	int q;

//	printf("%d, %d\n", a, b);
	if(a < b){
		int tmp = a;
		a = b;
		b = tmp;
	}
	q = a % b;

	while(q!=0){
		a = b;
		b = q;
		q = a % b;
	}
	return b;

}

int main(int argc, char* argv[])
{
	int KK;

	scanf("%d", &KK);

	int y1, y2;
	int N=0;
	for(int i=1; i<KK+1; i++){
		for(int j=1; j<KK+1; j++){
			for(int k=1; k<KK+1; k++){
				y1 = get_gcd(i, j);
				y2 = get_gcd(y1, k);
//				printf("%d\n", y2);
				N += y2;
			}
		}
	}
printf("%d", N);
	return 0;
}



