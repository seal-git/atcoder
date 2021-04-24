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

long long sum(long long i){
	return(i*(i+1)/2);
}
int main(int argc, char* argv[]){
long long A,B,C;
cin >> A>>B>>C;
long long n = 998244353;
long long ans = (sum(A)%n);
ans *= (sum(B)%n);
ans %= n;
ans *= (sum(C)%n);
ans %= n;
cout << ans <<endl;


}
