#include <iostream>
#include <string>
#include <stdio.h>
#include <math.h>
#include <queue>
#include <algorithm>
#include <utility>
#include <vector>
#include <tuple>
#include <numeric>
using namespace std;


int main(int argc, char* argv[]){
	int N;
	cin>>N;
	vector<int>A(N);
	for(int i=0;i<N;i++){
		cin>>A[i];
	}
	int max = 0;
	int GCD = 0;
	for(int i=2;i<1000;i++){
		int count=0;
		for(int j=0;j<N;j++){
			if(A[j]%i==0){
				count++;
			}
		}
		if(count>max){
			max = count;
			GCD = i;
		}
	}
	cout<<GCD<<endl;
}
