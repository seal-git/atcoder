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
	long long n;
	int k;
	cin>>n>>k;
	for(int i=0;i<k;i++){
		if(n%200==0){
			n /= 200;
		}else{
			n = n*1000+200;
		}
	}
	cout<<n<<endl;
}
