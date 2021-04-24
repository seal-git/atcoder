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
	int N;
	scanf("%d",&N);
	if(N<3){
		printf("0\n");
	}else{
		vector<int> L(N);
		for(int i=0; i<N; i++){
			scanf("%d", &L[i]);
		}
		sort(L.begin(), L.end());
//		vector<int> new_L;
//		new_L.push_back(L[0]);
//		for(int i=1; i<N; i++){
//			if(L[i]!=L[i-1]){
//				new_L.push_back(L[i]);
//				printf("%d,",L[i]);
//			}
//		}
		int a, b, c;
		int ans=0;
		for(int i=0; i<(int)L.size()-2; i++){
			for(int j=i+1; j<(int)L.size()-1; j++){
				for(int k=j+1; k<(int)L.size(); k++){
					a=L[i];
					b=L[j];
					c=L[k];
					if(a!=b && b!=c && c!=a){
						if(a+b>c){
//							printf("%d %d %d\n",a,b,c);
							ans++;
						}
					}
				}
			}
		}
		printf("%d", ans);

	}


}
