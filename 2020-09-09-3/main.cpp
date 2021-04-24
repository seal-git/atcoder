#include<bits/stdc++.h>
using namespace std;
using Int = long long;
#define int Int
/*
 [imin,imax) -> imin
 return maximum index such that v[index] <= value
 auto f(int mid) {return v[mid] <= value;}
 */
template<class F,class T>
auto  maximize(T imin,T imax,F &f){
    while(imax - imin > 1){
        T mid = imin + (imax - imin)/2;
        if(f(mid)) imin = mid;
        else imax = mid;
    }
    return imin;
}
bool solve(){
    int N,M; cin >> N >> M;
    if(N + M  == 0) return false;
    vector<int>s(N);
    for(auto& e  :  s) cin >> e;
    auto f = [&](int mid){
        int L = 1;
        for(int i  = 0; i < M;  ++i){
            auto itr = upper_bound(s.begin(),s.end(),L + mid);
            int maxi = L;
            if(itr != s.begin()) maxi = *prev(itr);
            int mini = L;
            if(itr != s.begin()) mini = s.front();
            L += max(1LL,max(mid - abs(L - mini),mid - abs(L - maxi)));
            if(L + mid >= s.back()) return false;
        }
        return true;
    };
    int ans = maximize(0LL, 1000000000LL,f);
    if(ans == 0) ans = -1;
    cout << ans << endl;
    return true;
}
signed main(){
    while(solve());
}
