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
	string S;
	int N;
	cin>>N>>S;
	/*
	for(int i=0;i<N;i++){
		int f_count=0;
		int fo_count=0;
		if(S[i]=='f'){
			f_count++;
			fo_count = 0;
		}else if(i+1<N&&S.substr(i,2)=="fo"){
			fo_count++;
			f_count = 0;
			i++;
		}else{
			fo_count = 0;
			f_count = 0;
		}
		int ox_count=0;
		int x_count=0;
		if(f_count>0&&i+1<N&&S.substr(i, 2)=="ox"){

		}
	}
*/

	bool flag = true;
	while(flag==true){
		flag = false;
		for(int i=0;i<N;i++){
			if(S.substr(i, 3)=="fox"){
				flag = true;
//				cout<<i<<endl;
				if(i+3<N){
					S = S.substr(0,i)+S.substr(i+3);
					N -= 3;
					if(i > 2){
						i -= 2;
					}
				}else{
					S = S.substr(0,i);
					N -= 3;
				}
			}
		}
//		cout<<S<<endl;
	}
	cout<<S.size()<<endl;
}
