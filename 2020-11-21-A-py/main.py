'''
Created on 2020/11/21

@author: seal0
'''
import math
S,P = map(int, input().split())
if S*S-4*P<0:
    print("No");
D_ll = int(math.sqrt(S*S-4*P));
#   cout<<D_ll<<endl;
if D_ll*D_ll!=S*S-4*P:
    print("No");
else:
    if((-S+D_ll)%2==0and(-S-D_ll)%2==0and(-S+D_ll)<=0and(-S+D_ll)<=0):
        print("Yes");
    else:
        print("No");

