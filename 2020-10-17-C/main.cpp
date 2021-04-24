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
	long long N;
	cin >> N;
	long long max = sqrt(N);
	vector <long long> s;
	vector<long long> s_back;
	for(long long i=1; i<=max; i++){
		if(N%i==0){
			s.push_back(i);
			if(i != N/i){
				s_back.push_back(N/i);
			}
		}
	}
	for(int i=0; i<(int)s.size(); i++){
		cout << s[i] <<endl;
	}
	for(int i=(int)s_back.size()-1; i>=0; i--){
		cout << s_back[i] <<endl;
	}


}
