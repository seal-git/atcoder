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
int N;
cin >> N;
long long sum = 0;
long long A,B;
for(int i=0;i<N;i++){
	cin >> A >> B;
	sum += B*(B+1)/2 - (A-1)*A/2;
}
cout << sum << endl;


}
