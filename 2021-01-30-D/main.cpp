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
	cin >> n;
	int sqn = (int)sqrt((double)n);
//	cout<<sqn<<endl;
	int ans = 0;
	for(long long i=1;i<=(long long)sqn;i++){
		if(n%i==0){
			if(i%2==1){
				ans++;
			}
			if((n/i)%2==1&&(n/i)!=i){
				ans++;
			}
		}
	}
	cout<<ans*2<<endl;
}
