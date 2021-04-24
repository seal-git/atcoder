#include<bits/stdc++.h>
#include<iostream>
using namespace std;


int main(){
int N;
cin >> N;
bool flag = true;
vector<string> s(N);
int A_num = 0;
int un_num = 0;
string s_mem = "";
for(int i=0; i<N;i++){
	cin >> s[i];
}
if(N==1){
	flag = false;
}
for(int i=0; i<N;i++){
	if(i==0 && s[i]=="Un"){
		flag = false;
		break;
	}
	if(s[i]=="A"){
		A_num += 1;
//		cout << A_num << endl;
	}else if(s[i]=="Un"){
		A_num -= 1;
//		cout << A_num << endl;
		if(A_num<0){
			flag = false;
			break;
		}
	}

}
if(A_num!=0){
	flag = false;
}
if(flag){
	cout << "YES" << endl;
}else{
	cout << "NO" << endl;
}

	return 0;
}
