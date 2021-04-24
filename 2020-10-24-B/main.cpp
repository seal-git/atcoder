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
int N,M;
cin >> N >> M;
vector<long long> A(N);
vector<long long> B(N);
vector <pair<int,int>> P(M);

long long sum_a = 0;
long long sum_b = 0;
for(int i=0;i<N;i++){
	cin >> A[i];
	sum_a += A[i];
}
for(int i=0;i<N;i++){
	cin >> B[i];
	sum_b += B[i];
}
vector<int> num(N,0);
for(int i=0;i<M;i++){
	int c,d, tmp;
	cin >> c >> d;
	if(c>d){
		tmp = c;
		c = d;
		d = tmp;
	}
	num[c-1]++;
	num[d-1]++;
	P[i] = make_pair(c, d);
}
bool flag = true;
for(int i=0; i<N; i++){
	if(num[i]==0 && A[i]!=B[i]){
		flag = false;
	}
}

if(sum_a != sum_b || flag==false){
	cout << "No" << endl;
}else{
	cout << "Yes" << endl;
}

return 0;




}
