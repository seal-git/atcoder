#include <iostream>
#include <string>
#include <stdio.h>
#include <math.h>
#include <queue>
using namespace std;

int main(int argc, char* argv[]){

	int K;
	char S[105];

	scanf("%d", &K);
	scanf("%s", S);

	string S_str = S;
	if(int(S_str.size()) <= K){
		printf("%s", S);
	}else{
		string S_cut;
		for(int i=0; i<K; i++){
			S_cut.push_back(S[i]);
		}
		S_cut+="...";
		printf("%s\n", S_cut.c_str());
	}


	return 0;
}





