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
	cin>>a>>b>>c;
	int bmod = b%4;
	int bcmod;
	if(bmod==0){
		bcmod = 4;
	}else if(bmod==1){
		bcmod = 1;
	}else if(bmod ==2){
		if(c==1){
			bcmod = 2;
		}else{
			bcmod = 4;
		}
	}else{
		if(c%2==0){
			bcmod = 1;
		}else{
			bcmod = 3;
		}
	}
//	cout<<bcmod<<endl;
	int digit = a%10;
	int ans = 1;
	for(int i=0; i<bcmod;i++){
		ans *= digit;
	}
	cout<<ans%10<<endl;

}
