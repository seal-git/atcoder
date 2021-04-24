#include<bits/stdc++.h>
#include<iostream>
using namespace std;


int main(){
	long double x_,y_,r_;
	long double eps = 1e-14;
	cin>>x_>>y_>>r_;
	long long x,y,r;
	x = round(10000.0*(x_+eps));
	y = round(10000.0*(y_+eps));
	r = round(10000.0*(r_+eps));

//	cout<<x<<" "<<y<<" "<<r<<endl;

	long long x_max = x+r;
	long long x_min = x-r;

	long long x_grid_max;
	long long x_grid_min;
	x_grid_max = (x_max/10000+5)*10000;
	while(x_grid_max>x_max){
		x_grid_max -= 10000;
	}
	x_grid_min = (x_min/10000-5)*10000;
	while(x_grid_min<x_min){
		x_grid_min += 10000;
	}
//	cout<<x_grid_min<<" "<<x_grid_max<<endl;

	long long ans=0;
	long long r2 = r*r;
	vector <long long>grid_list_ue;
	vector <long long>grid_list_sita;
	for(long long x_grid=x_grid_min; x_grid<=x_grid_max;x_grid+=10000){
		//上から
		long long y_grid = (ceil(sqrt(r2-(x_grid-x)*(x_grid-x)))+y);
			y_grid = (y_grid/10000+5)*10000;
			while((y_grid-y)*(y_grid-y)+(x_grid-x)*(x_grid-x)>r2){
				y_grid-=10000;
//				cout<<y_grid<<endl;
			}
//		cout<<"ue"<<y_grid<<endl;
		grid_list_ue.push_back(y_grid);
	}
	for(long long x_grid=x_grid_min; x_grid<=x_grid_max;x_grid+=10000){
		//下から
		long long y_grid = floor(-sqrt(r*r-(x_grid-x)*(x_grid-x)))+y;
//		cout<<y_grid<<endl;
			y_grid = (y_grid/10000-5)*10000;
			while((y_grid-y)*(y_grid-y)+(x_grid-x)*(x_grid-x)>r2){
				y_grid+=10000;
			}
//		cout<<y_grid<<endl;
		grid_list_sita.push_back(y_grid);
	}

	for(int i=0;i<grid_list_ue.size();i++){
		ans += (grid_list_ue[i]-grid_list_sita[i])/10000+1;
	}


	cout<<ans<<endl;

	return 0;
}
