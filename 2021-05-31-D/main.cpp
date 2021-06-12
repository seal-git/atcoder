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
	int n,k;
	cin>>n>>k;
	int a[n][n];
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			cin>>a[i][j];
		}
	}
	int mid = (k*k-1)-k*k/2;
	int ans = INT_MAX;
	for(int i=0;i<n-k+1;i++){
		vector<int> aa;
		for(int iii=0;iii<k;iii++){
			for(int jjj=0;jjj<k;jjj++){
				aa.push_back(a[i+iii][jjj]);
			}
		}
		sort(aa.begin(), aa.end());
		ans = min(aa[mid], ans);
		int big_sum = 0;
		int small_sum = 0;
		queue<int> big;
		queue<int> small;
		for(int jjj=0;jjj<k;jjj++){
			int big_count=0;
			int small_count=0;
			for(int iii=0;iii<k;iii++){
				if(a[iii][jjj]>ans){
					big_count++;
				}else{
					small_count++;
				}
			}
			big.push(big_count);
			small.push(small_count);
			big_sum += big_count;
			small_sum += small_count;
		}
		for(int j=0;j<n-k+1;j++){
			if(i==0&&j==0){
				continue;
			}
			int new_big = 0;
			int new_small = 0;
			for(int ii=i;ii<i+k;ii++){
				for(int jj=j;jj<j+k;jj++){
					if(a[ii][jj]>ans){
						big++;
					}else{
						small++;
						new_ans = max(new_ans, a[ii][jj]);
					}
				}
			}
			if(small==mid+1){
				ans = min(ans, new_ans);
			}
		}
	}
	cout<<ans<<endl;



}
