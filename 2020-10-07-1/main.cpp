#include<bits/stdc++.h>
#include<iostream>
using namespace std;


int main(){
	int  n, p;

	while(1){

		cin >> n >> p;
		if(n==0&&p==0){
			break;
		}
		vector<int> player(n,0);
		int i = 0;
		while(1){
			int now_player = i % n;
			if(p>0){
				player[now_player]+=1;
				p -= 1;
				/*
			for(int j=0; j<n;j++){
				cout << player[j];
			}
			cout << endl;
				 */
			}else{
				bool flag = true;
				for(int j=0; j<n;j++){
					if(j!=now_player && player[j]!=0){
						flag = false;
						break;
					}
				}
				if(flag==true){
					break;
				}else{
					p += player[now_player];
					player[now_player] = 0;
				}
			}
			i++;
		}
		cout << i%n << endl;
	}
	return 0;
}
