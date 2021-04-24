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
	string S, T;
	cin >> S>>T;
	if(S=="Y"){
		T = toupper(T[0]);
		cout << T << endl;
	}else{
		cout << T << endl;
	}
}
