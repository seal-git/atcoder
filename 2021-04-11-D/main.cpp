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
	//入力処理
	string s1,s2,s3;
	cin>>s1>>s2>>s3;
	//重複しないように文字をリスト化
	vector<char>char_list;
	for(int i=0;i<s1.size();i++){
		if(find(char_list.begin(), char_list.end(),s1[i])==char_list.end()){
			char_list.push_back(s1[i]);
		}
	}
	for(int i=0;i<s2.size();i++){
		if(find(char_list.begin(), char_list.end(),s2[i])==char_list.end()){
			char_list.push_back(s2[i]);
		}
	}
	for(int i=0;i<s3.size();i++){
		if(find(char_list.begin(), char_list.end(),s3[i])==char_list.end()){
			char_list.push_back(s3[i]);
		}
	}
	cout<<char_list.size()<<endl;
	//文字が11文字以上なら終了
	if(char_list.size()>10){
		cout<<"UNSOLVABLE"<<endl;
		return 0;
	}

	int nums[char_list.size()] = {0};	//文字に代入する数字リスト
	int* s1_num[s1.size()]; //文字を数字リストに渡すアドレスの配列
	//1文字ずつ数字リストへのアドレスを取得する
	for(int i=0;i<s1.size();i++){
		auto itr = find(char_list.begin(), char_list.end(),s1[i]);
		int index = distance(char_list.begin(), itr);
		s1_num[i] = &nums[index];
	}
	int* s2_num[s2.size()];
	for(int i=0;i<s2.size();i++){
		auto itr = find(char_list.begin(), char_list.end(),s2[i]);
		int index = distance(char_list.begin(), itr);
		s2_num[i] = &nums[index];
	}
	int* s3_num[s3.size()];
	for(int i=0;i<s3.size();i++){
		auto itr = find(char_list.begin(), char_list.end(),s3[i]);
		int index = distance(char_list.begin(), itr);
		s3_num[i] = &nums[index];
	}




	int s1_int = 0;
	int ten = 1;
	for(int i=s1.size()-1;i>=0;i--){
		s1_int += (*s1_num[i])*ten;
	}
	int s2_int = 0;
	ten = 1;
	for(int i=s2.size()-1;i>=0;i--){
		s2_int += (*s2_num[i])*ten;
	}
	int s3_int = 0;
	ten = 1;
	for(int i=s3.size()-1;i>=0;i--){
		s3_int += (*s3_num[i])*ten;
	}

	cout<<s1_int<<endl;
	cout<<s2_int<<endl;
	cout<<s3_int<<endl;


}
