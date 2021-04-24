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
	int x[N];
	int y[N];
	for(int i=0;i<N;i++){
		cin>>x[i]>>y[i];
	}
	int count=0;
	for(int i=0;i<N;i++){
		for(int j=i;j<N;j++){
			double x1=x[i];
			double y1=y[i];
			double x2=x[j];
			double y2=y[j];
			double ka = (y1-y2)/(x1-x2);
			if(ka<=1.0&&ka>=-1.0){
				count++;
			}
		}
	}
	cout<<count<<endl;

}
