#include<bits/stdc++.h>
#include<iostream>
using namespace std;


int main(){
	int N;
	cin>>N;
	int A[N];
	int B[N];
	int num[200000];
	for(int i=0;i<N;i++){
		cin>>A[i]>>B[i];
		num[A[i]-1]++;
		num[B[i]-1]++;
	}



	return 0;
}
