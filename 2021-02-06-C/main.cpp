#include<bits/stdc++.h>
#include<iostream>
using namespace std;


int main(){
int h,w;
cin>>h>>w;
char s[h][w];
for(int i=0;i<h;i++){
	for(int j=0;j<w;j++){
		cin>>s[i][j];
	}
}
int corner[h+1][w+1];
for(int i=0;i<h+1;i++){
	for(int j=0; j<w+1;j++){
		corner[i][j]=0;
		if(i-1>=0&&j-1>=0&&s[i-1][j-1]=='#'){
			corner[i][j]++;
		}
		if(i-1>=0&&j<w&&s[i-1][j]=='#'){
			corner[i][j]++;
		}
		if(j-1>=0&&i<h&&s[i][j-1]=='#'){
			corner[i][j]++;
		}
		if(j<w&&i<h&&s[i][j]=='#'){
			corner[i][j]++;
		}
//		cout<<corner[i][j]<<endl;
	}
}

int ans=0;
for(int i=0;i<h+1;i++){
	for(int j=0; j<w+1;j++){
		if(corner[i][j]==1||corner[i][j]==3){
			ans++;
		}
	}
}
cout<<ans<<endl;



	return 0;
}
