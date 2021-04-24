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
	long long r1,c1,r2,c2;
	cin>>r1>>c1>>r2>>c2;
//	0手でいける
	if(r1==r2&&c1==c2){
		cout<<"0"<<endl;
		return 0;
	}
	//		1手でいける
	if(abs(r1-r2)+abs(c1-c2)<=3){
		cout<<"1"<<endl;
		return 0;
	}else if(r1+c1==r2+c2||r1-c1==r2-c2){
		cout<<"1"<<endl;
		return 0;
	}

	//斜め2回でいける
	if((r1+c1)%2==(r2+c2)%2){
		cout<<"2"<<endl;
		return 0;
	}
	//斜め1回と縦横でいける
	for(long long i=-3;i<4;i++){
		if(r1+i+c1==r2+c2){
			cout<<"2"<<endl;
			return 0;
		}else if(r1+i-c1==r2-c2){
			cout<<"2"<<endl;
			return 0;
		}
	}
	cout<<"3"<<endl;





}
