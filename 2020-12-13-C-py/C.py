'''
Created on 2020/12/13

@author: tohoseal
'''

L = int(input())-1
a = 1
b = 1
for i in range(11):
    a *= L
    L -= 1
for i in range(1,12):
    b *= i

print(int(a/b))