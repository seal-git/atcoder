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
	long long n,s,d;
	cin>>n>>s>>d;
	long long x[n];
	long long y[n];
	for(int i=0;i<n;i++){
		cin>>x[i]>>y[i];
	}
	bool flag=false;
	for(int i=0;i<n;i++){
		if(x[i]<s&&y[i]>d){
			cout<<"Yes"<<endl;
			return  0;
		}
	}
	cout<<"No"<<endl;

}
