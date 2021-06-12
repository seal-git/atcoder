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
  int n;
  cin>>n;
  int sum = 0;
  for(int i=0;i<n;i++){
	  int a;
	  cin>>a;
	  if(a>10){
		  sum+=a-10;
	  }
  }
  cout<<sum<<endl;
}
