#include<bits/stdc++.h>
#include<iostream>
using namespace std;


int main(){
	int A,B,C,D;
	cin>>A>>B>>C>>D;
	cout<<min(min(A,B),min(C,D))<<endl;

	return 0;
}
