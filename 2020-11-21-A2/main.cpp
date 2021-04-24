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
	long long S,P;
	cin >>S>>P;
	if(P+1==S){
		cout<<"Yes"<<endl;
		return 0;
	}
	long long n=1;
 	long long max = (long long)sqrt((double)P);
	while(n<=max){
		if(P%n==0){
//			cout<<n <<" "<<P/n<<endl;
			if(P/n+n==S){
				cout<<"Yes"<<endl;
				return 0;
			}
		}
		n++;
	}
	cout<<"No"<<endl;
}
