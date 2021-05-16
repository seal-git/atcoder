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
	string s;
	cin>>s;
	int a[3] ={0};
	for(int i=0;i<10;i++){
		if(s[i]=='o'){
			a[0]++;
		}else if(s[i]=='?'){
			a[1]++;
		}else{
			a[2]++;
		}
	}
	if(a[0]>4||a[2]==10){
		cout<<0<<endl;
		return 0;
	}
	if(a[0]==4){
		cout<<24<<endl;
	}else if(a[0]==3){
		int ans = 36; //3種類のみ
		ans += a[1]*24;
		cout<<ans<<endl;
	}else if(a[0]==2){
		int ans = 14; //2種類のみ
		ans += 36 * a[1];
		ans += 24 * (a[1]*(a[1]-1)/2);
		cout<<ans<<endl;
	}else if(a[0]==1){
		int ans = 1; //1種類のみ
		ans += 14 * a[1];
		ans += 36 * (a[1]*(a[1]-1)/2);
		ans += 24 * (a[1]*(a[1]-1)*(a[1]-2)/6);
		cout<<ans<<endl;
	}else if(a[0]==0){
		cout<<a[1]*a[1]*a[1]*a[1]<<endl;
	}


}
