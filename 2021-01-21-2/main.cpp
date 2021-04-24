#include<bits/stdc++.h>
#include<iostream>
using namespace std;


int main(){
	string s;
	int n;
	cin>>s>>n;
	bool reverse = false;
	string mae;
	string ato;

	for (int i=0;i<n;i++){
		int type;
		cin>>type;
		if(type==1){
			reverse = !reverse;
		}else{
			int pos;
			string add_s;
			cin>>pos>>add_s;
			if(pos==1){
				if(reverse==false){
					mae += add_s;
				}else{
					ato += add_s;
				}
			}else{
				if(reverse==false){
					ato += add_s;
				}else{
					mae += add_s;
				}
			}
		}
	}
	std::reverse(mae.begin(),mae.end());
	s = mae + s + ato;

	if(reverse==false){
		cout<<s<<endl;
	}else{
		std::reverse(s.begin(),s.end());
		cout<<s<<endl;
	}

	return 0;
}
