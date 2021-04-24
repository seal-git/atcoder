#include <iostream>
#include <string>
#include <stdio.h>
#include <math.h>
#include <vector>
#include <string>

using namespace std;


int main(int argc, char* argv[])
{
	int N;
	scanf("%d",&N);
	vector<string> ids(N);
	for(int i=0; i<N; i++){
		char c_str[256];
		scanf("%s", c_str);
		string str = c_str;
		ids[i] = c_str;
	}

	int M;
	scanf("%d",&M);
	vector<string> names(M);
	for(int i=0; i<M; i++){
		char c_str[256];
		scanf("%s", c_str);
		string str = c_str;
		names[i] = c_str;
	}

	int state = 0;
	for(int i=0; i<M; i++){
//		printf("%s\n", names[i].c_str());
		bool flag = false;
		for(int j=0; j<N; j++){
			if(names[i]==ids[j]){
				flag=true;
				break;
			}
		}
		if(flag==false){
			printf("Unknown %s\n", names[i].c_str());
		}else{
			if(state==0){
				printf("Opened by %s\n", names[i].c_str());
				state=1;
			}else{
				printf("Closed by %s\n", names[i].c_str());
				state=0;
			}
		}


	}




	return 0;
}



