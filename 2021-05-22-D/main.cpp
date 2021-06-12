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
	long long a,b;
	long long k;
	cin>>a>>b>>k;
	long long m[35][35];
	m[0][0] = 0;
	for(int i=1;i<35;i++){
		m[i][0] = 1;
		m[0][i] = 1;
	}
	for(int i=1;i<35;i++){
		for(int j=1;j<35;j++){
			m[i][j] = m[i-1][j]+m[i][j-1];
		}
	}
//	cout<<m[30][30]<<endl;
	long long now = k;
	long long now_a = a;
	long long now_b = b;
	string ans;
	while(1){
		if(m[now_a-1][now_b]>=now){
			ans += 'a';
			now_a--;
		}else{
			now = now - m[now_a-1][now_b];
			ans += 'b';
			now_b--;
		}
		if(now_a==0||now_b==0){
			break;
		}
	}
	if(now_a==0){
		for(int i=0;i<now_b;i++){
			ans+='b';
		}
	}else{
		for(int i=0;i<now_a;i++){
			ans+='a';
		}
	}

	cout<<ans<<endl;


}
