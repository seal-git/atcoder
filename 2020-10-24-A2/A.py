from sys import stdin
n = int(stdin.readline().rstrip())

flag = False
for i in range(1,100):
    for j in range(1,100):
        if(pow(3,i)+pow(5,j)==n):
            print(i, j)
            flag = True
            break

if not flag :
    print("-1")

