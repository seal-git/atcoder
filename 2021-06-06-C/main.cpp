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
	int n,m;
	cin>>n>>m;
	vector<vector<int>> a(n+1);
	for(int i=0;i<m;i++){
		int ain,bin;
		cin>>ain>>bin;
		a[ain].push_back(bin);
	}
	int ans = 0;
	for(int i=1; i<n+1;i++){
		queue<int> q;
		vector<int> visited(n+1,0);
		q.push(i);
		visited[i] = 1;
		while(!q.empty()){
			int p = q.front();
			q.pop();
			for(int j=0;j<a[p].size();j++){
				if(visited[a[p][j]]==0){
					q.push(a[p][j]);
					visited[a[p][j]] = 1;
					ans++;
//					cout<<a[p][j]<<endl;
				}
			}
		}
//		cout<<"ans " <<ans<<endl;

	}
	ans += n;
	cout<<ans<<endl;
}
