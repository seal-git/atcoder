'''
Created on 2020/11/21

@author: seal0
'''
import math
r,x,y = list(map(int, input().split()))
# print(r,x,y)

r2 = r*r;
x2 = x*x;
y2 = y*y;
d2 = x2+y2;
if r2==d2:
    print(1)
elif r2>d2:
    print(2);
else:
    ans = math.ceil(math.sqrt(d2/r2))
    print(ans)

