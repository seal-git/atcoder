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
long long n;
cin>>n;
int keta = log10(n)+1;
//cout<<keta<<endl;
long long p[6];
p[0] = 0;
for(long long i=1;i<6;i++){
	p[i] = (pow(10,i*3)-pow(10,(i-1)*3))*(i-1)+p[i-1];
//	cout<<i<<" "<<p[i]<<endl;
}
if(keta==16){
	cout<<p[5]+5<<endl;
}else if(keta>=13){
	cout<<p[4]+(n-(long long)pow(10,12)+1)*4<<endl;
}else if(keta>=10){
	cout<<p[3]+(n-(long long)pow(10,9)+1)*3<<endl;
}else if(keta>=7){
	cout<<p[2]+(n-(long long)pow(10,6)+1)*2<<endl;
}else if(keta>=4){
	cout<<p[1]+(n-(long long)pow(10,3)+1)*1<<endl;
}else if(keta>=1){
	cout<<p[0]+(n-(long long)pow(10,0)+1)*0<<endl;
}


}
