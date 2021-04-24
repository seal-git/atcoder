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
 int a,b,x,y;
 cin>>a>>b>>x>>y;
 	 //最初だけx
 	 int root1 = x+y*abs(a-b);

 	 //xだけで行く
 	 int root2;
 	 if(a>b){
 		 root2 = x * ((a-b-1)*2+1);
 	 }else if(a<b){
 		 root2 = x * ((b-a)*2+1);
 	 }else{
 		 root2 = x;
 	 }

 	 //最後だけx
 	 int root3;
 	 if(a>b){
 		 root3 = y*(a-b-1)+x;
 	 }else if(a<b){
 		 root3 = y*(b-a)+x;
 	 }else{
 		 root3 = x;
 	 }

 	 cout<<min(min(root1,root2),root3)<<endl;



}
