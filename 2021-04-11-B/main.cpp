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
string s = to_string(n);
string new_s;
if(s[s.size()-1]!='0'){
	new_s = s;
}

for(int i=s.size()-1;i>=0;i--){
	if(s[i]!='0'){
		new_s = s.substr(0, i+1);
		break;
	}
}
//cout<<new_s<<endl;

bool flag = true;
for(int i=0;i<new_s.size();i++){
	if(new_s[i]!=new_s[new_s.size()-1-i]){
		flag = false;
		break;
	}
}

if(flag==true||new_s.size()==0){
	cout<<"Yes"<<endl;
}else{
	cout<<"No"<<endl;
}


}
