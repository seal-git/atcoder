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

int unite_group(int &num, int g, vector<vector<int>> &group_child, vector<int> &group_num){
	if((int)group_child[g].size()==0){
		num += group_num[g];
	}else{
		for(int i=0; i<(int)group_child[g].size(); i++){
			num +=  unite_group(num, group_child[g][i], group_child, group_num);
		}
	}
	return num;
}

int main(int argc, char* argv[]){
	int N,M;
	scanf("%d %d", &N,&M);
	vector<int> A(M);
	vector<int> B(M);
	for(int i=0;i<M;i++){
		scanf("%d %d", &A[i],&B[i]);
	}

	vector<int> group(N+1, -1);
	vector<int> group_num(N, 0);
	vector<vector<int>> group_parent(N);
	vector<vector<int>> group_child(N);
	int new_group=0;
	int group_num_max = 0;
	vector<pair<int, int>> group_pair;
	for(int i=0;i<M;i++){
		if(group[A[i]]==-1 && group[B[i]]==-1){
			group[A[i]] = new_group;
			group[B[i]] = new_group;
			group_num[new_group]+=2;
			if(group_num[new_group]>group_num_max){
				group_num_max = group_num[new_group];
			}
			new_group++;
		}else if(group[A[i]]!=-1 && group[B[i]]==-1){
			group[B[i]] = group[A[i]];
			group_num[group[A[i]]]+=1;
			if(group_num[group[A[i]]]>group_num_max){
				group_num_max = group_num[group[A[i]]];
			}
		}else if(group[A[i]] ==-1 && group[B[i]]!=-1){
			group[A[i]] = group[B[i]];
			group_num[group[B[i]]]+=1;
			if(group_num[group[B[i]]]>group_num_max){
				group_num_max = group_num[group[B[i]]];
			}
		}else if(group[A[i]]!=-1 && group[B[i]]!=-1){
			if(group[A[i]] < group[B[i]]){
				group_parent[group[B[i]]].push_back(group[A[i]]);
				group_child[group[A[i]]].push_back(group[B[i]]);
			}else if(group[A[i]] > group[B[i]]){
				group_parent[group[A[i]]].push_back(group[B[i]]);
				group_child[group[B[i]]].push_back(group[A[i]]);
			}
		}
	}
	for(int i=0;i<N;i++){
		printf("%d:%d\n",i+1,group[i+1]);
	}
	for(int i=0;i<N;i++){
		printf("g_%d:%d\n",i,group_num[i]);
	}
//	for(int i=0; i<(int)group_num.size(); i++){
//		if(group_num[i]!=0){
//			group++;
//		}
//	}
	vector<int>parent;
	for(int i=0; i<N; i++){
		if(group_parent[i].size() == 0){
			parent.push_back(i);
		}
	}
	int ans = 0;
	for(int i=0; i<(int)parent.size(); i++){
		int num = 0;
		num = unite_group(num, parent[i], group_child, group_num);
		printf("%d %d %d\n", i, num, group_parent[i]);
		if(num > ans){
			ans = num;
		}
	}


	printf("%d\n", group_num_max);

}
