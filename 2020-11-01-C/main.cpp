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
	cin >> N;
	vector <pair<double,double>> P(N);
	for(int i=0; i<N; i++){
		double x,y;
		cin >> x>>y;
		P[i] = make_pair(x, y);
	}
	vector <pair<long long,long long>> ab;
	bool flag = false;
	for(int i=0; i<N-1; i++){
		for(int j=i+1; j<N; j++){
			double x1 = P[i].first;
			double y1 = P[i].second;
			double x2 = P[j].first;
			double y2 = P[j].second;
			long long a,b;
			if(x2-x1==0){
				a = 100000000;
				b = x1;
			}else{
				a = (long long)((y2-y1)/(x2-x1)*100000);
				b = (long long)(((-1)*(y2-y1)/(x2-x1)*x1+y1)*100000);
			}
			for(int k=0;k<(int)ab.size(); k++){
//				cout<< k <<" "<<a<<" "<<b<<endl;
				if(ab[k].first==a && ab[k].second==b){
					flag = true;
//					cout<< k <<" "<<a<<" "<<b<<endl;
					goto end;
				}
			}
			ab.push_back(make_pair(a,b));
		}
	}
	end:
	if(flag==true){
		cout << "Yes"<<endl;
	}else{
		cout << "No"<<endl;
	}
}
