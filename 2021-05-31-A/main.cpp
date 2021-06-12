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
int a,b,c;
cin>>a>>b>>c;
if(a==b){
	cout<<c<<endl;
}else if(b==c){
	cout<<a<<endl;
}else if(a==c){
	cout<<b<<endl;
}else{
	cout<<0<<endl;
}
}
