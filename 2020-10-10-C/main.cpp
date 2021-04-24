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
	vector<int>P(N);
	for (int i=0; i<N; i++){
		cin >> P[i];
	}
	vector<int> num_list(300000, 0);
	int min=0;
	for(int i=0; i<N; i++){
		num_list[P[i]] = 1;
		for(int num=min; num<300000; num++){
			if(num_list[num]==0){
				cout << num<< endl;
				if(num > min){
					min = num;
				}
				break;
			}
		}
	}

}
