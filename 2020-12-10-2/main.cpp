#include<bits/stdc++.h>
#include<iostream>
using namespace std;


int main(){
	int N,M;
	cin>>N>>M;
	vector<long long>H(N);
	vector<long long>W(M);
	for(int i=0;i<N;i++){
		cin >> H[i];
	}
	for(int i=0;i<M;i++){
		cin>>W[i];
	}
	sort(H.begin(),H.end());
	long long diff_sum = 0;
	long long diff_max[2] = {-1,-1};
	long long diff[N-1];
	for(int i=0;i<N-1;i++){
		diff[i] = H[i+1]-H[i];
		if(diff[i]>diff_max[0]){
			diff_max[0] = diff[i];
			diff_max[1] = i;
		}
		diff_sum += diff[i];
	}
	cout<<diff_max[0]<<" "<<diff_max[1]<<endl;




	return 0;
}
