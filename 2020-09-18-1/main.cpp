#include<bits/stdc++.h>
using namespace std;

int main(){

	vector<int> N;
	int n;
	while(1){
		cin >> n;
		if(n==0){
			break;
		}
		int max=0;
		int min=100000;
		int sum=0;
		for(int j=0; j<n; j++){
			int num;
			cin >> num;
			sum += num;
			if(num>max){
				max = num;
			}
			if(num<min){
				min = num;
			}
		}
		sum = sum - max- min;
		int ave = sum / (n-2);
		printf("%d\n", ave);
	}







	return 0;
}
