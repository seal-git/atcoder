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
 cin>>n;

 long long root_n = sqrt(n+1);
 long long k = root_n*2;

 while(1){
	 if(k*(k+1)/2<=n+1){
		 break;
	 }
	 k--;
 }

// cout<<root_n<<" "<<k<<" "<<k*(k+1)/2<<endl;
 cout<<n-k+1<<endl;

}
