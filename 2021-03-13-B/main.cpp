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
int a,b,w;
cin>>a>>b>>w;
w = 1000*w;
int w_min,w_max;
w_min = w/b;
w_max = w/a;
bool min_flag = false;
bool max_flag = false;
bool end_flag = false;
while(end_flag==false){
	//残量を計算
	int amari = w - w_min*b;
//	cout<<"a"<<amari<<endl;
	//割り切れているなら出力
	if(amari==0){
		min_flag = true;
		break;
	}
	//a(重さの最小値)より小さいならw_minを減らす
	if(amari<a){
		w_min--;
		continue;
	}
	//余りがaより大きければ適切な重さがあるか探す
	int i=1;
	while(1){
		//余り/iがbより大きいならiを増やす
		if(amari > b*i){
			i+=1;
			continue;
		}else if(amari < a*i){
			//余り/iがaより小さいなら適切な重さはない
			break;
		}else{
			//適切な重さなら出力
//			cout<<"i"<<i<<endl;
			w_min += i;
			amari = 0;
			end_flag = true;
			min_flag = true;
			break;
		}
	}
	//出力されていなかったらw_minを1減らして次へ
	if(end_flag==false){
		w_min--;
		if(w_min < 0){
			break;
		}
	}
}
//cout<<w_min<<" "<<min_flag<<endl;

end_flag = false;
while(end_flag==false){
	//残量を計算
	int amari = w - w_max*a;
//	cout<<"a"<<amari<<endl;
	//割り切れているなら出力
	if(amari==0){
		max_flag = true;
		break;
	}
	//a(重さの最小値)より小さいならw_maxを減らす
	if(amari<a){
		w_max--;
		continue;
	}
	//余りがaより大きければ適切な重さがあるか探す
	int i=1;
	while(1){
		//余り/iがbより大きいならiを増やす
		if(amari > b*i){
			i+=1;
			continue;
		}else if(amari < a*i){
			//余り/iがaより小さいなら適切な重さはない
			break;
		}else{
			//適切な重さなら出力
//			cout<<"i"<<i<<endl;
			w_max += i;
			amari = 0;
			end_flag = true;
			max_flag = true;
			break;
		}
	}
	//出力されていなかったらw_maxを1減らして次へ
	if(end_flag==false){
		w_max--;
		if(w_max < 0){
			break;
		}
	}
}
//cout<<w_max<<" "<<max_flag<<endl;
if(min_flag==true&&max_flag==true){
	cout<<w_min<<" "<<w_max<<endl;
}else{
	cout<<"UNSATISFIABLE"<<endl;
}


}
