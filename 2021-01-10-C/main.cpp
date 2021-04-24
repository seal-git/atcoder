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
	cin>>N;
	long long num = 1;
	for(int i=0;i<N;i++){
		num *= 2;
	}
	//cout<<num<<endl;
	long long mae=0;
	long long ato=0;
	long long mae_idx = 0;
	long long ato_idx = 0;
	for(long long i=0;i<num;i++){
		long long a;
		cin>>a;
		if(i<num/2){
			if(mae<a){
				mae = a;
				mae_idx = i;
			}
		}else{
			if(ato<a){
				ato = a;
				ato_idx = i;
			}
		}
	}

	if(mae<ato){
		cout<<mae_idx+1<<endl;
	}else{
		cout<<ato_idx+1<<endl;
	}

}
