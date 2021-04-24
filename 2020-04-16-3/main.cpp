#include <iostream>
#include <string>
#include <stdio.h>
#include <math.h>
#include <queue>
using namespace std;

int main(int argc, char* argv[])
{
	int N;
	char a[5] = {'a', 'i', 'u', 'e', 'o'};
	char S[50];

	scanf("%d %s", &N, S);
	int count = 0;

	for(int i=0; i<N; i++){
		for(int j=0; j<5; j++){
			if(S[i] == a[j]){
				count++;
				break;
			}
		}

	}
	printf("%d", count);

	return 0;
}



