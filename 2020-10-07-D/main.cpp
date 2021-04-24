#include<bits/stdc++.h>
#include<iostream>
using namespace std;


int main(){
	while(1){

		int e;
		cin >> e ;
		if(e==0){
			break;
		}
		vector <int>tri_list(101);
		for(int i=0; i<101; i++){
			tri_list[i] = (i+1) * (i+1) * (i+1);
		}
		int nearest_3;
		for(int i=0;i<101;i++){
			if(e<tri_list[i]){
				nearest_3 = i;
				break;
			}
		}
		int min_m = 100000;
		for(int i=nearest_3; i>=0; i--){
			int nearest_2 = int(sqrt(e - i*i*i));
			for(int j=nearest_2; j>=0; j--){
				int x = e - i*i*i - j*j;
				cout << x <<" "<< j <<" "<< i << endl;
				int m = x + j + i;
				if(m < min_m){
					min_m = m;
				}
			}
		}

		cout << min_m << endl;


	}

	return 0;
}
