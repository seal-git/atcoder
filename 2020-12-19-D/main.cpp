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
	for(int i=0;i<N;i++){
		cin>>A[i];
	}
	long long tmp[N-1];
	for(int i=0;i<N-1;i++){
		tmp[i] = A[i+1]-A[i];
	}
	long long ans = 0;
	long long cnt = N-2;
	for(int i=0;i<N-1;i++){
		if(i>N-2-i){
			break;
		}
		if(i == N-2-i){
			ans += tmp[i]*cnt;
		}else{
			ans += tmp[i]*cnt+tmp[N-2-i]*cnt;
		}
		cnt += 2;
	}
	cout<<ans<<endl;


}
