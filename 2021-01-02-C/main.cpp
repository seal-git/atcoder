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
	int N;
	cin>>N;
	vector<string> S(N);
	for(int i=0;i<N;i++){
		cin>>S[i];
	}
	sort(S.begin(),S.end());
	vector<string> Sc;
	for(int i=0;i<S.size();i++){
		if(i==0||S[i]!=S[i-1]){
			if(S[i][0]=='!'){
				Sc.push_back(S[i].substr(1));
			}else{
				Sc.push_back(S[i]);
			}
		}
	}
	sort(Sc.begin(),Sc.end());
//	for(int i=0;i<Sc.size();i++){
//		cout<<Sc[i]<<endl;
//	}

	string ans="satisfiable";
	for(int i=1;i<Sc.size();i++){
//		cout<<Sc[i]<<endl;
		if(Sc[i]==Sc[i-1]){
			ans = Sc[i];
			break;
		}
	}
	cout<<ans<<endl;
	return 0;
}
