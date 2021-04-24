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
long long N,C;
cin>>N>>C;
static long long d[1000000000] = {};
for(long long i=0;i<N;i++){
	long long a,b,c;
	cin>>a>>b>>c;
	d[a] += c;
	d[b] -= c;
}
long long sum = 0;
for(long long i=1;i<1000000000;i++){
	d[i] += d[i-1];
	if(d[i]>C){
		sum += C;
	}else{
		sum += d[i];
	}
}
cout<<sum<<endl;


}
