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
	long long X,Y,A,B;
	cin >> X >> Y>>A>>B;

	long long now = X;
	long long step = 0;
	while(1){
		if(now*A<now+B && now*A<Y&& (double)now*A <=2e18 ){
		now *= A;
		step++;
		}
		else{
			break;
		}
	}
//	cout << step <<" "<<now << endl;
	long long diff = Y - now;
	step += diff / B;
	if(diff%B==0){
		step--;
	}

	cout << step <<endl;
}
