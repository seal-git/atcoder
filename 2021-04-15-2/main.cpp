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
	int a,b;
	char op;
	cin>>a>>op>>b;
	if(op=='+'){
		cout<<a+b<<endl;
	}else{
		cout<<a-b<<endl;
	}
}
