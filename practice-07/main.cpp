#include <iostream>
#include <string>
#include <stdio.h>
#include <math.h>
#include <queue>
#include <algorithm>

using namespace std;

int main(int argc, char* argv[]){
	int N;

	scanf("%d",&N);

	vector <int> A(N);

	for(int i=0; i<N; i++){
		int num;
		scanf("%d", &num);
		A[i] = num;
	}

	sort(A.begin(), A.end(), greater<int>());

	int A_sum = 0;
	int B_sum = 0;

	for (int i=0; i<N; i++){
		A_sum += A[i];
		i++;
		B_sum += A[i];
	}

	printf("%d\n", A_sum - B_sum);

	return 0;
}



