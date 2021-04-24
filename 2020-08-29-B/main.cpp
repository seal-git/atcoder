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
	char cS[1000];
	char cT[1000];
	scanf("%s", cS);
	scanf("%s", cT);
	string S = cS;
	string T = cT;
//	printf("%d",S.size());
//	printf("%d",T.size());

	int match_max = 0;
	for(int i=0; i<(int)S.size()-(int)T.size()+1; i++){
		int match = 0;
		for(int j=0; j<(int)T.size(); j++){
//			printf("%c, %c\n", S[i+j], T[j]);
			if(S[i+j] == T[j]){
				match++;
				if(match > match_max){
					match_max = match;
				}
			}
		}
	}

	printf("%d\n", (int)T.size()-match_max);


}
