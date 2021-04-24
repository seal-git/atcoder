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

char win(char a,char b){
	char win;
	if(a=='R'){
		if(b=='R') win='R';
		if(b=='S') win='R';
		if(b=='P') win='P';
	}
	if(a=='S'){
		if(b=='R') win='R';
		if(b=='S') win='S';
		if(b=='P') win='S';
	}
	if(a=='P'){
		if(b=='R') win='P';
		if(b=='S') win='S';
		if(b=='P') win='P';
	}
	return win;
}

int main(int argc, char* argv[]){
	int n,k;
	string s;
	cin>>n>>k>>s;
//	n = 4; k = 5;
//	s = "PRSS";
	s += s;
	int near_k = max(1,(int)log2(n));
//	cout<<near_k<<" "<<s<<endl;

	while(k>near_k){
		string next_s;
		for(int i=0;i<(int)s.size();i+=2){
			next_s += win(s[i],s[i+1]);
		}
		s = next_s;
		s += s;
		k--;
//		cout<<k<<" "<<s<<endl;
	}
//	cout<<k<<endl;
	for(int i=k;i>=1;i--){
		string next_s;
		for(int j=0;j<(int)pow(2,k);j+=2){
			if(j+1>=s.size()) break;
			next_s += win(s[j],s[j+1]);
		}
		s = next_s;
//		cout<<s<<endl;
	}
	cout<<s<<endl;
}
