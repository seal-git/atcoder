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
 if(n==1||n==2||n==3){
	 cout<<n<<endl;
	 return 0;
 }
 int max = 100005;
 long long nums[max];
 vector<long long> primes;
 nums[0] = 0;
 nums[1] = 0;
 for(int i=2;i<max;i++){
	 nums[i] =1;
 }
 for(long long i=2;i<max;i++){
	 if(nums[i]==1){
		 primes.push_back(i);
		 for(int j=i*2;j<max;j+=i){
			 nums[j]=0;
		 }
	 }
 }
//for(int i=0;i<primes.size();i++){
//	 cout<<primes[i]<<endl;
//}

 long long count = 3;

 for(long long i=4; i<=n;i++){
	 vector<long long> soinsu(primes.size(),0);
	 vector<long long> shisu;
	 long long tmp = i;
	 bool flag = true;
	 long long idx;
	 for(long long j=0; j<primes.size();j++){
		 long long prime = primes[j];
		 if(i<prime){
			 break;
		 }
//		 cout<<i<<" "<<prime<<endl;
		 if(tmp%prime==0){
//			 cout<<tmp<<" "<<prime<<endl;
			 while(1){
				 if(tmp%prime==0){
					 tmp /= prime;
					 soinsu[j]++;
				 }else{
					 shisu.push_back(soinsu[j]);
//					 cout<<soinsu[j]<<endl;
					 break;
				 }
			 }
		 }
	 }
	 long long min_shisu = 100000;
	 if(shisu.size()==1&&shisu[0]>=2){
		 flag = true;
	 }else{
		 for(int k=0;k<shisu.size();k++){
//			 cout<<i <<" "<<shisu.size()<<endl;
			 if(shisu[k]==1){
				 flag = false;
				 break;
			 }
			 if(shisu[k]>1){
				 min_shisu = min(min_shisu, shisu[k]);
				 if(shisu[k]%min_shisu!=0){
					 flag = false;
				 }
			 }
		 }
	 }
	 if(flag == false){
		 count++;
	 }else{
//		 cout<<i<<endl;
	 }
 }
 cout<<count<<endl;

}
