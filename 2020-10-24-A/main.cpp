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

long long powl(long long a, long long b){
	long long n = 1;
	for(long long i=0; i<b; i++){
		n *= a;
	}
//	cout << a << endl;
	return n;
}

int main(int argc, char* argv[]){
long long N, NN;
cin >> N;
bool flag=false;
for(long long i=1;i<50; i++){
	NN = N - powl(3,i);
	if(NN<0){
		break;
	}
	for(long long j=1; j<50; j++){
		if(NN -powl(5,j)<0){
			break;
		}
		if(powl(5,j)==NN){
			cout << i << " "<<j<<endl;
			flag = true;
			goto exit;
		}
	}
}
exit:
if(!flag){
	cout << "-1" << endl;
}
}
