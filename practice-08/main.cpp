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

	vector <int> mochi(N);

	for(int i=0; i<N; i++){
		int num;
		scanf("%d", &num);
		mochi[i] = num;
	}

	sort(mochi.begin(), mochi.end(), greater<int>());

	int mochi_now = 101;
	int count = 0;
	for(int i=0; i<N; i++){
		if(mochi[i] < mochi_now){
			mochi_now = mochi[i];
			count++;
		}

	}

	printf("%d\n", count);



	return 0;
}



