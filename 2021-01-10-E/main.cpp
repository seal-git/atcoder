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

struct node{
	vector<int> child;
	int parent = -1;
	long long price;
};
struct kin{
	int town;
	long long  price;
};

int main(int argc, char* argv[]){
long long N,M;
cin>>N>>M;
node n[N];
for(int i=0;i<N;i++){
	long long a;
	cin>>a;
	n[i].price = a;
}
for(int i=0;i<M;i++){
	int a,b;
	cin>>a>>b;
	n[a-1].child.push_back(b-1);
	n[b-1].parent = a-1;
}
vector<int> root_idx;
for(int i=0;i<N;i++){
	if(n[i].parent == -1){
		root_idx.push_back(i);
	}
}
long long ans = -100000000000000;
for(int i=0;i<root_idx.size();i++){
	if(n[i].child.size()==0){
		continue;
	}
	queue<kin> que;
	kin init;
	init.town = i;
	init.price = i;
	que.push(init);
	while(!que.empty()){
		kin k_now = que.front();
		que.pop();
		int now = k_now.town;
		int p = k_now.price;
		cout<<now<<" "<<p<<endl;
		ans = max(n[now].price-p,ans);
		for(int j=0;j<n[now].child.size();j++){
			kin k;
			k.town = n[now].child[j];
			if(n[i].price<=p){
				k.price = n[now].price;
			}else{
				k.price = p;
			}
			que.push(k);
		}
	}
}
cout<<ans<<endl;




}
