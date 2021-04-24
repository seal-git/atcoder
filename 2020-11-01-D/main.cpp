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
	vector <vector<int> > D2_list;
	for(int i=2; i<13; i++){
		vector<int> D2(9,0);
		string n = to_string(i*8);
		if(n.find("0")!=string::npos){
			continue;
		}else{
			for(int j=0;j<2;j++){
				int s = (int)(n[j]-'0');
				D2[s-1]++;
			}
		}
		/*
		for(int k=0; k<9; k++){
			cout<<D2[k];
		}
		cout<<endl;
		*/
		D2_list.push_back(D2);
	}
	vector <vector<int> > D3_list;
	for(int i=13; i<125; i++){
		vector<int> D3(9,0);
		string n = to_string(i*8);
		if(n.find('0')!=string::npos){
			continue;
		}else{
			for(int j=0;j<3;j++){
				int s = (int)(n[j]-'0');
				D3[s-1]++;
			}
		}
		/*
		for(int i=0; i<9; i++){
			cout<<D3[i];
		}
		cout<<endl;
		*/
		D3_list.push_back(D3);
	}
	string S;
	cin >> S;
	vector <int> DS(9,0);
	for(int i=0; i<(int)S.size(); i++){
		int n = (int)(S[i]-'0');
		DS[n-1]++;
	}
	/*
	for(int i=0; i<9; i++){
		cout<<DS[i]<<endl;
	}
	*/

	if(S.size()==1){
		int n = stoi(S);
		if(n==8){
			cout << "Yes"<<endl;
		}else{
			cout << "No"<<endl;
		}
	}else if(S.size()==2){
		bool exist = false;
		for(int i=0; i<(int)D2_list.size();i++){
			bool flag = true;
			for(int j=0; j<9;j++){
				if(DS[j]<D2_list[i][j]){
					flag = false;
					break;
				}
			}
			if(flag == true){
				exist = true;
				break;
			}
		}
		if(exist == true){
			cout<<"Yes"<<endl;
		}else{
			cout << "No"<<endl;
		}
	}else{
		bool exist = false;
		for(int i=0; i<(int)D3_list.size();i++){
			bool flag = true;
			for(int j=0; j<9;j++){
				if(DS[j]<D3_list[i][j]){
					flag = false;
					break;
				}
			}
			if(flag == true){
				exist = true;
				break;
			}
		}
		if(exist == true){
			cout<<"Yes"<<endl;
		}else{
			cout << "No"<<endl;
		}
	}
return 0;
}
