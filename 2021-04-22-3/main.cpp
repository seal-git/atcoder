#include<bits/stdc++.h>
#include<iostream>
using namespace std;


int main(){
	int n, k;
	cin>>n>>k;
	int a[n];
	double kita[n];
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
		kita[i] = ((double)a[i]+1.0)/2.0;
	}
	double kita_sum = 0.0;
	for(int i=0;i<k;i++){
		kita_sum += kita[i];
	}
	double ans = kita_sum;
	for(int i=k;i<n;i++){
		kita_sum = kita_sum - kita[i-k] + kita[i];
		ans = max(kita_sum, ans);
//		cout<<kita_sum<<endl;
	}
	printf("%.8f\n", ans);



	   return 0;
}
