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
//		cout<<s[i]<<endl;
		if(i%2==0){
			if(s[i]<'a'||s[i]>'z'){
				cout<<"No"<<endl;
				return 0;
			}
		}else{
			if(s[i]<'A'||s[i]>'Z'){
				cout<<"No"<<endl;
				return 0;
			}
		}
	}
	cout<<"Yes"<<endl;
}
