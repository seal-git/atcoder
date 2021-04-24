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
vector<long long> A(N);
long long diff = 0;
for(int i=0;i<N;i++){
	long long a,b;
	cin>>a>>b;
	A[i] = a+a+b;
	diff += a;
}
sort(A.begin(),A.end(),greater<>{});
long long count = 0;
for(int i=0;i<A.size();i++){
//	cout<<diff<<endl;
	count++;
	diff -= A[i];
	if(diff<0){
		break;
	}
}
cout<<count<<endl;
}
