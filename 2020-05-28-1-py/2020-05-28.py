import copy

class Node(object):
    #構造体を使うと遅くなる？2重リストで表現すべき
    def __init__(self, num):
        self.num = num
        self.adjacency_list = []
        self.values = 0

N, Q = map(int, input().split())
ab = [list(map(int, input().split())) for i in range(N-1)]
px = [list(map(int, input().split())) for i in range(Q)]

node = [Node(num=i) for i in range(N)]

for i in range(N - 1): # 0 ~ N-2
    node[ab[i][1]-1].adjacency_list.append(ab[i][0]-1)
    node[ab[i][0]-1].adjacency_list.append(ab[i][1]-1)
    #append使った

for i in range(Q):
    node[px[i][0]-1].values +=px[i][1]

def dfs138(parent, n, val_p): #children is list
    node[n].values += val_p #parent kara keisyou
    val_n = node[n].values #val_n toshite syotoku
    adj = node[n].adjacency_list
    for i in adj:
        if(i == parent):
            continue
        dfs138(n, i, val_n) #val_nを流す
#finish

dfs138([],0,0)

output = []
for n in range(N):
    val_n = node[n].values
    output.append(val_n)
print(' '.join([str(i) for i in output]))
