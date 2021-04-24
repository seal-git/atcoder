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
	long long t;
	cin >> t;
	for(int i=0;i<t;i++){
		long long n;
		cin>>n;
		if(n%2==1){
			cout<<"Odd"<<endl;
		}else if(n%4==0){
			cout<<"Even"<<endl;
		}else{
			cout<<"Same"<<endl;
		}
	}
}
