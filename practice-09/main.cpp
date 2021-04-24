#include <iostream>
#include <string>
#include <stdio.h>
#include <math.h>
#include <queue>
#include <algorithm>

using namespace std;

int main(int argc, char* argv[]){
	int N, Y ;

	scanf("%d %d",&N, &Y);

	int x = -1;
	int y = -1;
	int z = -1;

	for(int i=0; i<N+1; i++){
		for(int j=0; j<N-i+1; j++){
			int money = i * 10000 + j * 5000 +
					(N - i - j) * 1000;
			if(money == Y){
				x = i;
				y = j;
				z = N - i - j;
				break;
			}
		}
	}

	printf("%d %d %d", x, y, z);





	return 0;
}



