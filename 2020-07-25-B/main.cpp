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
	int a,b,c,k;
	int after_a, after_b, after_c;
	scanf("%d %d %d %d",&a,&b,&c,&k);
	bool flag=false;
	for(int i=0; i<k+1;i++){
		for(int j=0; j<k+1-i;j++){
			for(int kk=0; kk<k+1-i-j; kk++){
				after_a = a*pow((double)2,(double)i);
				after_b = b*pow((double)2,(double)j);
				after_c = c*pow((double)2,(double)kk);
//				printf("%d %d %d\n",after_a,after_b,after_c);
				if(after_a<after_b&&after_b<after_c){
					flag=true;
					break;
				}
			}
			if(flag){
				break;
			}
		}
		if(flag){
			break;
		}
	}
	if(flag){
		printf("Yes\n");
	}else{
		printf("No\n");
	}

}


