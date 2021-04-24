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
int n,x;
string s;
cin >>n>>x>>s;
for(int i=0;i<n;i++){
	if(s[i]=='o'){
		x++;
	}else{
		if(x>0){
			x--;
		}
	}
}
cout<<x<<endl;
}
