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
int N,K;
cin >> N >> K;
vector<long long> A(N);
for(int i=0; i<N; i++){
	cin >> A[i];
}

vector <long long> AA(N*(N-1)/2);
for(int i=0; i<N-1;i++){
	for(int j=1; j<N; j++){
		AA[i*(N-1)+j-1] = A[i]+A[j];
	}
}

for(long long  i=1; i<K+1; i++){
	for(long long j=0; j<N*(N-1)/2; j++){
		cout << pow(AA[j], i) % 998244353 << endl;
	}

}
}
