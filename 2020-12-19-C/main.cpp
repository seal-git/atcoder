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
	int count = 0;
	for(int i=1;i<N+1;i++){
		bool flag = true;
		//10進数で7を含まない
		string num1 = to_string(i);
		for(int j=0; j<num1.length(); j++){
			if(num1[j]=='7'){
				flag = false;
				break;
			}
		}
		//8進数で7を含まない
		string num2 = "";
		int tmp = i;
		for(int j=0; j<5; j++){
			num2 += to_string(tmp%8);
			tmp = tmp/8;
			if(tmp<8){
				num2+= to_string(tmp);
				break;
			}
		}
		for(int j=0; j<num2.length(); j++){
			if(num2[j]=='7'){
				flag = false;
				break;
			}
		}
		if(flag==true){
			count++;
		}
	}
	cout<<count<<endl;
}
