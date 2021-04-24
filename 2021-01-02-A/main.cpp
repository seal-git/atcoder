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
int a,b;
cin>>a>>b;
string sa = to_string(a);
string sb = to_string(b);
int wa=0;
int wb=0;
for(int i=0;i<3;i++){
	wa += int(sa[i]-'0');
	wb += int(sb[i]-'0');
}
if(wa>wb){
	cout<<wa<<endl;
}else{
	cout<<wb<<endl;

}
}
