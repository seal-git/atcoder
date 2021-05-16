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
	int h,w;
	cin>>h>>w;
	char a[h][w];
	int t_s = 0;
	int a_s = 0;
	for(int i=0;i<h;i++){
		for(int j=0;j<w;j++){
			cin>>a[i][j];
			if(i==0&&j==0){
				continue;
			}
			if(i%2==0){
				if(j%2==0){
					if(a[i][j]=='+'){
						a_s++;
					}else{
						a_s--;
					}
				}else{
					if(a[i][j]=='+'){
						t_s++;
					}else{
						t_s--;
					}
				}
			}else{
				if(j%2==0){
					if(a[i][j]=='+'){
						t_s++;
					}else{
						t_s--;
					}
				}else{
					if(a[i][j]=='+'){
						a_s++;
					}else{
						a_s--;
					}
				}
			}
		}
	}
//	cout<<a_s<<" "<<t_s<<endl;
	if(t_s>a_s){
		cout<<"Takahashi"<<endl;
	}else if(t_s<a_s){
		cout<<"Aoki"<<endl;
	}else{
		cout<<"Draw"<<endl;
	}

}
