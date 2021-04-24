#include <iostream>
#include <string>
#include <stdio.h>
#include <math.h>
#include <vector>
using namespace std;

long long factorize(long long N) {
    vector<long long> v;
    vector <long long> n;
    long long i = 2;
    while (i * i <= N) {
        if (N % i == 0) {
			if(v.size()>0){
				if(v.back() != i){
					v.push_back(i);
					N /= i;
					n.push_back(1);
				}else{
					N /= i;
					n[(int)n.size()-1] += 1;
				}
        	}else{
				v.push_back(i);
				N /= i;
				n.push_back(1);
        	}
        } else {
            i++;
        }
    }
    if(N != 1)v.push_back(N);
    long long num_of_yakusu = 1;
    for(int i=0; i<(int)n.size(); i++){
    	printf("%lld,\n",n[i]);
    	num_of_yakusu *= n[i]+1;
    }
    printf("ny %lld\n", num_of_yakusu);
    return num_of_yakusu;
};

int main(int argc, char* argv[])
{
	long long N;
	scanf("%lld", &N);
//	vector<long long> v;
//	v = factorize(N);
//	long long now = v[0];
//	long long count = 1;
//	long long num_of_soinsu = 1;
//	for(int i=0; i<(int)v.size(); i++){
//		printf("%lld\n", v[i]);
//		if(now!=v[i]){
//			now = v[i];
//			num_of_soinsu *= count+1;
//			count = 1;
//		}else if(now==v[i]){
//			count++;
//		}
//	}
	long long ans=0;
	for(long long i=1; i<N+1; i++){
		ans += factorize(i);
	}



	printf("%lld", ans);



	return 0;
}



