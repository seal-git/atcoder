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
  int H,W;
  cin >> H >> W;
  vector<string> S(H);
  for (int i=0; i<H; i++){
	  cin >> S[i];
  }
  int ans = 0;
  for(int i=0; i<H; i++){
	  for(int j=0; j<W-1; j++){
		  if(S[i][j]=='.' && S[i][j+1]=='.'){
			  ans++;
		  }
	  }
  }
  for(int j=0; j<W; j++){
	  for(int i=0; i<H-1; i++){
		  if(S[i][j]=='.' && S[i+1][j]=='.'){
			  ans++;
		  }
	  }
  }

  cout << ans << endl;



}
