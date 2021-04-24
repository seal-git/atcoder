/*
 * main.cpp
 *
 *  Created on: 2020/03/06
 *      Author: seal0
 */
#include <iostream>
#include <string>
#include <stdio.h>
using namespace std;

int main(int argc, char* argv[])
{
	int K;
	scanf("%d", &K);
	string str = "1, 1, 1, 2, 1, 2, 1, 5, 2, 2, 1, 5, 1, 2, 1, 14, 1, 5, 1, 5, 2, 2, 1, 15, 2, 2, 5, 4, 1, 4, 1, 51";
	string separate =", ";
	int numbers[32];

	int find ;
	int pos=0;
	int length_of_str = (int) str.length();

	for (int i=0; i<32; i++){
		find = (int) str.find(separate, pos);
		string substr =str.substr(pos, find-pos);
		pos = find+2;
//		printf("n=%s\n", substr.c_str());
		numbers[i] = stoi(substr);
	}
	printf("%d", numbers[K-1]);
	return 0;
}



