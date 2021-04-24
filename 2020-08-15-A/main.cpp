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
	char S[5];
	scanf("%s",&S);

	int ans=0;
	int sum=0;
	bool flag=false;
	for(int i=0; i<3; i++){
		if(S[i]=='R'&&flag==false){
			flag=true;
			sum=1;
			if(ans<sum){
				ans=sum;
			}
		}else if(S[i]=='R'&&flag==true){
			sum++;
			if(ans<sum){
				ans=sum;
			}
		}else{
			sum=0;
		}
	}
	printf("%d\n", ans);




}
