#include <iostream>
#include <string>
#include <stdio.h>
#include <math.h>
#include <queue>
using namespace std;

int main(int argc, char* argv[]){

	int A,B,H,M;

	scanf("%d %d %d %d", &A, &B, &H, &M);

	double theta, alpha, beta, y;
	double pi = M_PI;

	alpha = double(M) * 2.0 * pi / 60.0;
	beta = (double(H)+double(M)/60.0) * 2.0 * pi / 12.0;
	theta = min(abs(alpha-beta), 2.0*pi-abs(alpha-beta));

	y = sqrt(pow(double(A), 2.0)+pow(double(B), 2.0) - 2.0 * double(A) * double(B)*cos(theta));
	printf("%.15lf\n", y);
	return 0;
}





