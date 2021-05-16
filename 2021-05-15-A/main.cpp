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
vector<int> a(3);
cin>>a[0]>>a[1]>>a[2];
sort(a.begin(), a.end());
if(a[2]-a[1]==a[1]-a[0]){
	cout<<"Yes"<<endl;
}else{
	cout<<"No"<<endl;
}
}
