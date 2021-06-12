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
	int a,b,c;
	cin>>a>>b;
	if(a==b){
		cout<<a<<endl;
	}
	else{
		int num[3] = {0,1,2};
		for(int i=0;i<3;i++){
			if(num[i]==a){
				num[i] = -1;
			}
			if(num[i]==b){
				num[i] = -1;
			}
		}
		for(int i=0;i<3;i++){
			if(num[i]!=-1){
				cout<<num[i]<<endl;
				return 0;
			}
		}

	}
}
