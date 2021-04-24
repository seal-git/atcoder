#include <iostream>
#include <string>
#include <stdio.h>
#include <math.h>
#include <queue>
#include <algorithm>
#include <utility>
using namespace std;


int main(int argc, char* argv[]){
	int a[4];
	int sum = 0;
	for (int i=0; i<4; i++){
		scanf("%d", &a[i]);
		sum+=a[i];
	}
	int min = 10000;
	for(int i=0; i<4; i++){
		for(int j=i+1; j<4; j++){
			int team1 = a[i]+a[j];
			int team2 = sum - team1;
			if(abs(team1-team2)<min){
				min = abs(team1-team2);
			}
		}
	}
	printf("%d\n", min);


	return 0;
}




