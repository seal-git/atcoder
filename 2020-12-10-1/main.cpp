#include<bits/stdc++.h>
#include<iostream>
using namespace std;


int main(){
	int H,W,N,M;
	cin>>H>>W>>N>>M;
	vector<vector<int>> masu(H,vector<int>(W,0));
	vector<vector<int>> akari(H,vector<int>(W,0));
	for(int i=0;i<N;i++){
		int x,y;
		cin>>x>>y;
		masu[x-1][y-1] = 1;
	}
	for(int i=0;i<M;i++){
		int x,y;
		cin>>x>>y;
		masu[x-1][y-1] = -1;
	}
/*
	for(int h=0;h<N;h++){
		//行の右を照らす
		for(int i=A[h][0]; i<=W-1; i++){
//			cout<<i<<endl;
			if(masu[i][A[h][1]]<0){
				break;
			}else{
				masu[i][A[h][1]] += 1;
			}
		}
		//行の左を照らす
		for(int i=A[h][0]; i>=0; i--){
//			cout<<i<<endl;
			if(masu[i][A[h][1]]<0){
				break;
			}else{
				masu[i][A[h][1]] += 1;
			}
		}
		//列の上を照らす
		for(int i=A[h][1]; i<=H-1; i++){
			if(masu[A[h][0]][i]<0){
				break;
			}else{
				masu[A[h][0]][i] += 1;
			}
		}
		//列の下を照らす
		for(int i=A[h][1]; i>=0; i--){
			if(masu[A[h][0]][i]<0){
				break;
			}else{
				masu[A[h][0]][i] += 1;
			}
		}
	}
*/
	//左から右に走査
	bool state;
	for(int i=0;i<H;i++){
		state = false;
		for(int j=0;j<W;j++){
			if(masu[i][j]==1&&state==false){
				state = true;
				akari[i][j]++;
			}else if(masu[i][j]==-1&&state==true){
				state = false;
			}else if(masu[i][j]!=-1&&state==true){
				akari[i][j]++;
			}
		}
	}
	//右から左に走査
	for(int i=0;i<H;i++){
		state = false;
		for(int j=W-1;j>=0;j--){
			if(masu[i][j]==1&&state==false){
				state = true;
				akari[i][j]++;
			}else if(masu[i][j]==-1&&state==true){
				state = false;
			}else if(masu[i][j]!=-1&&state==true){
				akari[i][j]++;
			}
		}
	}
	//上から下に走査
	for(int j=0;j<W;j++){
		state = false;
		for(int i=0;i<H;i++){
			if(masu[i][j]==1&&state==false){
				state = true;
				akari[i][j]++;
			}else if(masu[i][j]==-1&&state==true){
				state = false;
			}else if(masu[i][j]!=-1&&state==true){
				akari[i][j]++;
			}
		}
	}
	//下から上に走査
	for(int j=0;j<W;j++){
		state = false;
		for(int i=H-1;i>=0;i--){
			if(masu[i][j]==1&&state==false){
				state = true;
				akari[i][j]++;
			}else if(masu[i][j]==-1&&state==true){
				state = false;
			}else if(masu[i][j]!=-1&&state==true){
				akari[i][j]++;
			}
		}
	}

	int count=0;
	for(int i=0;i<H;i++){
		for(int j=0;j<W;j++){
//			cout<<akari[i][j];
			if(akari[i][j]>0){
				count++;
			}
		}
//		cout<<endl;
	}
	cout<<count<<endl;





	return 0;
}
