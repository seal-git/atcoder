#include<bits/stdc++.h>
#include<iostream>
using namespace std;


int main(){
int N;
 cin >> N;
 vector<int> nums(N);

 for(int i=0;i<N;i++){
	 cin >> nums[i];
 }
for(int i=0;i<N;i++){
	 int num = nums[i];
	 string s_num = to_string(num);
	 int count=0;
	 while (s_num.size()>1){
		 count += 1;
		 int max = 0;
		 for(int j=1; j<s_num.size(); j++){
			 int num1 = stoi(s_num.substr(0, j));
			int num2 = stoi(s_num.substr(j));
//			 cout << num1 << " "<< num2 <<endl;
			if(num1*num2 > max){
				max = num1*num2;
			}
		 }
		 s_num = to_string(max);
//		 cout << s_num <<endl;

	 }
	 cout << count <<endl;
 }

	return 0;
}
