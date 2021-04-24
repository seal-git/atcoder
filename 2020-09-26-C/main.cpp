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

struct UnionFind{
	vector<int> parent;
	int N;
//	UnionFind(int n) : parent(n), N(n){ //メンバイニシャライザを実行している
//		for(int i=0; i<n; i++){
//			parent[i] = i;
//		}
//	}
	UnionFind(int n){ //メンバイニシャライザを実行しないで定義
		parent.resize(n);
		N = n;
		for(int i=0; i<n; i++){
			parent[i] = i;
		}
	}

	int getParent(int x){
		return parent[x];
	}

	int root(int x){
		if(parent[x]==x){
			return x;
		}else{
			parent[x] = root(parent[x]); //親の付け替え(ならし)
			return parent[x];
		}
	}
	void unite(int x, int y){
		int rx = root(x);
		int ry = root(y);
		if(rx!=ry){
			parent[ry] = rx;
		}
	}
	bool same(int x, int y){
		int rx = root(x);
		int ry = root(y);
		return rx==ry;
	}
};

int main(int argc, char* argv[]){
	int N,M;
	scanf("%d %d", &N, &M);
	vector<int>A(M);
	vector<int>B(M);
	UnionFind tree(N);
	for(int i=0; i<M; i++){
		scanf("%d %d", &A[i], &B[i]);
		if(A[i]>B[i]){
			int tmp;
			tmp =  B[i];
			B[i] = A[i];
			A[i] = tmp;
		}
		tree.unite(A[i]-1, B[i]-1);
	}
	int count = 0;
	for(int i=0; i<N; i++){
		if(tree.getParent(i)==i){
			count++;
		}
	}
	printf("%d\n", count-1);

}

