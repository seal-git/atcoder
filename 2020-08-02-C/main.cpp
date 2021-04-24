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
	int K;
	scanf("%d", &K);
	int init=0;
	int i = 0;
	while(K>init){
		init += 7 * pow(10.0, i);
		i++;
	}
//	printf("%d\n",init);
	vector<int> syo;
	int warukazu = init;
	int flag = false;
	for(int i=0; i<10000000; i++){
		syo.push_back(warukazu / K);
//		printf("%d\n", syo[i]);
		int amari = warukazu % K;
		if(amari==0){
			flag = true;
			break;
		}else{
			warukazu = amari*10+7;
		}
	}
	if(flag){
		int syo_log10 = (int)syo.size()-1;
		int K_log10 = (int)log10((float)(K));
		if((float)K/pow(10.0, K_log10)<=7.77777){
			int answer = syo_log10 + K_log10 + 1;
//			printf("%d %d %d\n", syo_log10, K_log10, answer);
			printf("%d\n", answer);
		}else{
			int answer = syo_log10 + K_log10 + 2;
//			printf("%d %d %d\n", syo_log10, K_log10, answer);
			printf("%d\n", answer);
		}
	}else{
		printf("%d\n", -1);
	}


}
