#include <iostream>
#include <string>
#include <stdio.h>
#include <math.h>
#include <queue>
using namespace std;

struct Node{
	vector<int> next;
	long long point=0;
};

void add_point(vector<Node> &node, int index, int parent){
	if(node[index].next.size()==1&&index!=0){
		return;
	}else{
		for(int i=0; i<int(node[index].next.size()); i++){
			if(node[index].next[i]!=parent){
				int child_index=node[index].next[i];
				node[child_index].point+=node[index].point;
				add_point(node, child_index, index);
			}
		}
	}

}

int main(int argc, char* argv[]){

	int N,Q;
	scanf("%d %d", &N, &Q);
	vector<Node> node(N);

	for(int i=0; i<N-1; i++){
		int a, b;
		scanf("%d %d", &a, &b);
			node[a-1].next.push_back(b-1);
			node[b-1].next.push_back(a-1);
	}
	for(int i=0; i<Q; i++){
		int p;
		long long x;
		scanf("%d %lld", &p, &x);
		node[p-1].point+=x;
	}

	add_point(node, 0, 0);

	for(int i=0; i<N; i++){
		printf("%lld\n", node[i].point);
	}

	return 0;
}





