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
//	for(int n=100;n<300;n++){
//		cout<<n<<" ";
		long long N;
		cin>>N;
		string S = to_string(N);
		int wa=0;
		int mod0 = 0;
		int mod1 = 0;
		int mod2 = 0;
		for(int i=0;i<S.size();i++){
			int x = int(S[i]-'0');
			if(x%3==0)mod0++;
			if(x%3==1)mod1++;
			if(x%3==2)mod2++;
			wa += x;
		}
		if(wa%3==0){
			cout<<0<<endl;
		}else if(wa%3==1){
			if(S.size()<=2){
				if(mod0==0){
					cout<<-1<<endl;
				}else{
					cout<<1<<endl;
				}
			}else if(mod1>=1){
				cout<<1<<endl;
			}else if(mod2>=2){
				cout<<2<<endl;
			}
		}else if(wa%3==2){
			if(S.size()<=2){
				if(mod0==0){
					cout<<-1<<endl;
				}else{
					cout<<1<<endl;
				}
			}else if(mod2>=1){
				cout<<1<<endl;
			}else if(mod1>=2){
				cout<<2<<endl;
			}
		}
//	}
	}
