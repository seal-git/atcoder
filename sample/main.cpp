#include <iostream>
#include <string>
using namespace std;

int main(int argc, char* argv[]){
	int N = 789;
	string S = to_string(N);
    cout<<"str:"<<S<<" type:"<<typeid(S).name()<<endl;
}
