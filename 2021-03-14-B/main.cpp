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

long long get_ans(int group){
	long long ans = 1;
	for(int i=0;i<group;i++){
		ans *= 2;
		ans %= 998244353;
	}
	return (ans%998244353-1);
}

int main(int argc, char* argv[]){
int n;
cin>>n;
int a[n];
int g[n];
int group = 0;
int cycle = 0;
for(int i=0;i<n;i++){
	cin>>a[i];
	if(a[i]==i+1){
		g[i] = group;
		group++;
		cycle++;
	}else{
		g[i] = -1;
	}
}
bool flag = true;
for(int i=0;i<n;i++){
	if(g[i]==-1){
		flag = false;
		break;
	}
}
if(flag == true){
	cout<<get_ans(group)<<endl;
	return 0;
}
for(int i=0;i<n;i++){
	if(g[i]!=-1){
		continue;
	}
	g[i] = group;
	int next = a[i]-1;
	bool flag = false;
	while(1){
//		cout<<next<<endl;
		if(g[next]==group){
			flag = true;
			break;
		}
		if(g[next]!=-1){
			break;
		}
		g[next] = group;
		next = a[next]-1;
	}
	group++;
	if(flag==true){
		cycle++;
	}
}
//for(int i=0;i<n;i++){
//	cout<<g[i]<<" ";
//}
cout<<get_ans(cycle)<<endl;





}
