#include <iostream>
#include <string>
#include <stdio.h>
using namespace std;

int main(int argc, char* argv[])
{
	long long H, W, y;
	scanf("%lld %lld", &H, &W);

	if(H == 1 || W == 1){
		y = 1;
	}else{

		long long H_mod = H % 2;
		long long W_mod = W % 2;

		y = (H/2+H_mod) * (W/2+W_mod) + (H/2) * (W/2);
	}
	printf("%lld\n", y);
	return 0;
}



