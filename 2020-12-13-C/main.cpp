#include<bits/stdc++.h>
#include<iostream>
using namespace std;


int main(){
	long long L;
	cin>>L;

	long long a = L-1;
	long long init = L-2;
	for(long long i=2;i<12;i++){
		a = a * init / i;
		init--;
	}
	cout<<a<<endl;

	return 0;
}
