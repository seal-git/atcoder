#include <iostream>
#include <string>
#include <stdio.h>
#include <math.h>
#include <queue>
using namespace std;

int main(int argc, char* argv[])
{
	int a[3], count;

	for(int i=0; i<3; i++){
		scanf("%d", &a[i]);
		if(a[i] == 1){
			count++;
		}
	}

if(count>=2){
	printf("%d", 1);
}else{
	printf("%d", 2);
}

	return 0;
}



