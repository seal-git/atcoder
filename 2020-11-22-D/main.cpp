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
#include <iomanip>
using namespace std;

double getE(int i0, int i1, int i2){
	if(i0==100||i1==100||i2==100){
		return 0.0;
	}else{
		double sum = (double)i0+i1+i2;
		double E = (double)i0/sum*(getE(i0+1,i1,i2)+1.0)+(double)i1/sum*(getE(i0,i1+1,i2)+1.0)+(double)i2/sum*(getE(i0,i1,i2+1)+1.0);
		return E;
	}
}


int main(int argc, char* argv[]){
	vector <int> A(3);
	for(int i=0;i<3;i++){
		cin>>A[i];
	}
	vector <double> table(100);
	double ans = getE(A[0],A[1],A[2]);
	cout<<fixed<<setprecision(8)<<ans<<endl;


}
