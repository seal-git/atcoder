#include<bits/stdc++.h>
using namespace std;

int main(){
	  int h, w, k;
	  cin >> h >> w >> k;
	  vector<string> T(h);
	  for(int i = 0; i < h; ++i)
	    cin >> T[i];
	  vector<vector<int>> A(h,vector<int>(w,-1));
	  int t = 0;
	  for(int i = 0; i < h; ++i){
	    for(int j = 0; j < w; ++j){
	      if(T[i][j] != '#'){
	    	  continue;
	      }else{
		      t++;
		      A[i][j] = t;
		    }
	      }
	  }
	  for(int i = 0; i < h; ++i){
	    for(int j = 1; j < w; ++j){
	      if(T[i][j] == '#') continue;
	      A[i][j] = A[i][j-1];
	    }
	  }

	  for(int i = h-1; i >= 0; --i){
	    for(int j = w-2; j >= 0; --j){
	      if(A[i][j] >= 0) continue;
	      A[i][j] = A[i][j+1];
	    }
	  }
	  for(int i = 0; i < h; ++i){
	    for(int j = 0; j < w; ++j){
	      if(i+1 < h and A[i+1][j] < 0){
	        A[i+1][j] = A[i][j];
	      }
	    }
	  }
	  for(int i = h-1; i >= 0; --i){
	    for(int j = w-1; j >= 0; --j){
	      if(i-1 >= 0 and A[i-1][j] < 0){
	        A[i-1][j] = A[i][j];
	      }
	    }
	  }
	  for(int i = 0; i < h; ++i)
	    for(int j = 0; j < w; ++j)
	      cout << A[i][j] << (j+1 == w ? '\n' : ' ');
	}
