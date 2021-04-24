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
	int a[m];
	int b[m];
	for(int i=0;i<m;i++){
		cin>>a[i]>>b[i];
	}
	int k;
	cin>>k;
	int c[k];
	int d[k];
	for(int i=0;i<k;i++){
		cin>>c[i]>>d[i];
	}
	int ans = 0;
	for(int bit=0;bit < (1<<k); bit++){
		int sara[n] = {0};
		for(int i=0;i<k;i++){
			if(bit & (1<<i)){
				sara[c[i]-1] = 1;
			}else{
				sara[d[i]-1] = 1;
			}
		}
//		for(int i=0;i<n;i++){
//			cout<<sara[i];
//		}
//		cout<<endl;
		int count = 0;
		for(int j=0;j<m;j++){
			if(sara[a[j]-1]==1&&sara[b[j]-1]==1){
				count++;
			}
		}
		ans = max(ans,count);
	}
	cout<<ans<<endl;


}
