'''
Created on 2020/11/21

@author: seal0
'''
import math
n = int(input())
a = list(map(int, input().split()))
# print(n,a)

a.sort()
mod = 998244353;
ans = (a[n-1]* a[n-1]) % mod;
b = a[n-1];
for i in range(n-2, -1, -1):
    b = (2*b - a[i+1] + a[i])%mod;
    ans += (a[i] * b)%mod;
    ans %= mod;

print(ans)