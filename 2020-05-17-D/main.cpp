#include <iostream>
#include <string>
#include <stdio.h>
#include <math.h>
#include <queue>
using namespace std;

struct Node{
	//ノード(親ノードと複数の子ノードを保存)
	int parent;
	vector<int> child;
};
void set_child(Node nodes[], int node_idx, int* map_ptr[], int N, int list[], queue<int>& que){
	//子ノードを全てセットする
	for(int i=0; i<N; i++){
		if(map_ptr[node_idx][i]==1 && list[i]!=1){ //まだ書いてないノードだけ書く
			nodes[node_idx].child.push_back(i);
			nodes[i].parent = node_idx;
			list[i] = 1;
			que.push(i);
			//			printf("%d\n", i);
		}
	}
};

int main(int argc, char* argv[]){

	int N,M;
	scanf("%d %d", &N, &M);

	//表現行列の初期化
	int adj[N][N];
	for(int i=0; i<N; i++){
		for(int j=0;j<N; j++){
			adj[i][j] = 0;
		}
	}
	//2次元配列を関数に渡すために表現行列の各行のポインタを配列化
	int *map_ptr[N];
	for(int i=0; i<N; i++){
		map_ptr[i] = &adj[i][0];
	}
	//表現行列の作成
	for(int i=0; i<M; i++){
		int A, B;
		scanf("%d", &A);
		scanf("%d", &B);
		adj[A-1][B-1] = 1;
		adj[B-1][A-1] = 1;
	}
	//確認
	//	for(int i=0; i<N; i++){
	//		for(int j=0;j<N; j++){
	//			printf("%d ", map[i][j]);
	//		}
	//		printf("\n");
	//	}

	Node node[N];
	int room_list[N]={0}; //行った部屋は1
	int idx = 0;
	queue<int> que;

	node[0].parent = 0;
	room_list[0] = 1;
	que.push(0);

	//node[0]から幅優先で全ノードの親と子をセットする
	while(!que.empty()){
		idx = que.front();
		que.pop();
		set_child(node, idx, map_ptr, N, room_list, que);
	}
	//確認
	//		for(int i=0; i<N; i++){
	//			int child_size = int(node[i].child.size());
	//			printf("%d:", i);
	//			printf("%d:", child_size);
	//			for(int j=0; j<child_size; j++){
	//				printf("%d ",node[i].child[j]);
	//			}
	//			printf("\n");
	//		}

	//訪れていないノードがあるかチェック
	int check = 0;
	for(int i=0; i<N; i++){
		if(room_list[i]==0){
			check = 1;
			break;
		}
	}
	if(check==1){
		printf("No\n");
	}else{
		printf("Yes\n");
		for(int i=1; i<N; i++){
			printf("%d\n", node[i].parent+1);
		}
	}

	return 0;
}





