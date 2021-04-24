#include<bits/stdc++.h>
using namespace std;

int main(){
int x, y, k;
scanf("%d %d",&x, &y);
scanf("%d",&k);

if(y>=k){
	printf("%d\n", x+k);
}else{
	printf("%d\n", x+y-(k-y));
}



	return 0;
}
