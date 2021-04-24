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
	long long N;
	cin>>N;
	vector<long long>A(N);
	vector<long long>R(N);
	vector<long long>S(N);
	for(long long i=0;i<N;i++){
		cin>>A[i];
		if(i==0){
			R[i]=A[i];
		}else{
			R[i]=R[i-1]+A[i];
		}
		if(i==0){
			S[i] = A[i];
		}else if(A[i]>0){
			S[i]=max(R[i-1]+A[i],S[i-1]);
		}else if(A[i]<=0){
			S[i]=S[i-1];
		}
	}
	for(int i=0;i<N;i++){
//		cout<<i<<" "<<S[i]<<endl;
	}
	long long wa = 0;
	long long max = 0;
	for(long long i=0;i<N;i++){
		long long highest = wa+S[i];
		if(highest>max)max = highest;
		wa += R[i];
//		cout<<"wa "<<wa<<endl;
//		cout<<"highest "<<highest<<endl;
	}
	cout<<max<<endl;
}
