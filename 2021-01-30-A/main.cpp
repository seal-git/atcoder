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
	if(c==0){
		if(a>b){
			cout<<"Takahashi"<<endl;
		}else{
			cout<<"Aoki"<<endl;
		}
	}else{
		if(b>a){
			cout<<"Aoki"<<endl;
		}else{
			cout<<"Takahashi"<<endl;
		}
	}
}
