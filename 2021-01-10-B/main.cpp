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
	long long A[N];
	long long B[N];
	long long sum = 0;
			for(int i=0;i<N;i++){
				cin>>A[i];
			}
			for(int i=0;i<N;i++){
				cin>>B[i];
			}
			for(int i=0;i<N;i++){
				sum += A[i]*B[i];
			}

	if(sum==0){
		cout<<"Yes"<<endl;
	}else{
		cout<<"No"<<endl;
	}
}
