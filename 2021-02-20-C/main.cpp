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

long long g1(long long n){
	string s = to_string(n);
	sort(s.begin(),s.end(),greater<int>());
	return stoll(s);
}
long long g2(long long n){
	string s = to_string(n);
	sort(s.begin(),s.end());
	return stoll(s);
}
int main(int argc, char* argv[]){
	long long n,k;
	cin>>n>>k;
	for(int i=0;i<k;i++){
//		cout<<g1(n)<<" "<<g2(n)<<endl;
		n = g1(n) - g2(n);
	}
	cout<<n<<endl;
}
