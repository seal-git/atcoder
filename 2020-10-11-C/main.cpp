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

void dfs(int N, vector<int>&A,vector<int>& num,vector<vector<long long>> &D, long long  &score){
	if(int(A.size())==N){
		long long score_ = 0;
		for(int i=0; i<N-1; i++){
			score_ += D[A[i]][A[i+1]];
		}
		if(score_ < score){
			score = score_;
			//		/*
			for(int i=0; i<A.size(); i++){
				cout << A[i];
			}
			cout << endl;
			for(int i=0; i<A.size()-1; i++){
				cout << D[A[i]][A[i+1]]<< " ";
			}
			cout << score_ << endl;
			//		*/
		}
		return;
	}else{
		for(int i=0; i<N; i++){
			if(num.end()!=find(num.begin(), num.end(), i)){
				continue;
			}
			A.push_back(i);
			num.push_back(i);
			dfs(N, A, num, D, score);
			A.pop_back();
			num.pop_back();
		}
	}

}


int main(int argc, char* argv[]){
	int N,M;
	cin >> N >> M;
	vector <long long> W(N);
	vector <long long> L(M);
	vector <long long> V(M);
	for(int i=0; i<N;i++){
		cin >> W[i];
	}
	for(int i=0;i<M;i++){
		cin >> L[i] >> V[i];
	}
	bool flag = true;
	vector<vector<long long>> D(N,vector<long long>(N));
	for(int i=0; i<N;i++){
		for(int j=0;j<N;j++){
			if(i==j){
				D[i][j] = 0;
			}else{
				D[i][j] = 0;
				for(int k=0;k<M;k++){
					if(W[i] > V[k]){
						flag = false;
						goto end;
					}
					auto weight = W[i]+W[j];
					if(weight>V[k] && L[k]>D[i][j]){
						D[i][j] = L[k];
					}
				}
			}
		}
	}
	end:
//	/*
	for(int i=0; i<N;i++){
		for(int j=0;j<N;j++){
			cout << D[i][j] << " ";
		}
		cout << endl;
	}
//	*/
	if(flag){
		long long ans = 100000000;
		vector<int> A;
		vector<int> num;
		long long score=100000000;
		dfs(N, A, num, D, score);
		cout << score << endl;
	}else{
		cout << -1 << endl;
	}
	return 0;








}
