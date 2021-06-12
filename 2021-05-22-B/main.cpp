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
	for(int i=0;i<s.size();i++){
		if(s[i]=='6'){
			s[i]='9';
		}else if(s[i]=='9'){
			s[i] = '6';
		}
	}
	reverse(s.begin(), s.end());
	cout<<s<<endl;

}
