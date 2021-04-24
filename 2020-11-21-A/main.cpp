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
	if(S*S-4*P<0){
		cout<<"No"<<endl;
		return 0;
	}
	long long D_ll = (long long)sqrt((double)(S*S-4*P));
//	cout<<D_ll<<endl;
	if(D_ll*D_ll!=S*S-4*P){
		cout<<"No"<<endl;
	}else{
		if((-S+D_ll)%2==0&&(-S-D_ll)%2==0&&(-S+D_ll)<=0&&(-S-D_ll)<=0){
			cout<<"Yes"<<endl;
		}else{
			cout<<"No"<<endl;
		}
	}
}
