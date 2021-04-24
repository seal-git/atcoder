#include <iostream>
#include <string>
#include <stdio.h>
#include <math.h>
#include <queue>
using namespace std;


int main(int argc, char* argv[])
{
	char s[3];

	scanf("%s", s);

	int count = 0;
	for(int i=0; i<3; i++){
		if(s[i] == '1'){
			count+=1;
		}
	}

	printf("%d", count);



	return 0;
}



