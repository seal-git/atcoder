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
	long long k;
	cin>>k;
	long long count = 0;
	/*
	for(int i=1;i<=k;i++){
		for(int ii=1;ii<=k;ii++){
			for(int iii=1;iii<=k;iii++){
				if(i * ii * iii <= k){
					if(i==ii){
						if(ii==iii){
							count+=1;
						}else{
							count+=3;
						}
					}else if(ii==iii){
						count+=3;
					}else{
						count+=6;
					}
					count++;
					cout<<i <<" "<<ii<<" "<<iii<<endl;
				}
			}
		}
	}
	*/
	for(long long i=1;i<=k;i++){
		long long tmp=k/i;
		for(long long j=1;j<=tmp;j++){
			count += tmp/j;
//			cout<<tmp<<" "<<j<<endl;
		}
	}
	cout<<count<<endl;

}
