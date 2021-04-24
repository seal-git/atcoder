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
long long r,x,y;
cin>>r>>x>>y;
long long r2 = r*r;
long long x2 = x*x;
long long y2 = y*y;
long long d2 = x2+y2;
if(r2==d2){
	cout<<1<<endl;
}else if(r2>d2){
	cout<<2<<endl;
}else{
	if(d2%r2==0){
		long long ans = long long(sqrt(double(d2/r2)))+1;
	}



	}
}
