import math
n=int(input())
arr=list(map(int,input().split()))
b,c=map(int, input().split())
answer=0
for i in arr:
  if i-b<=0: 
    answer+=1
  else:
    answer+=math.ceil((i-b)/c)+1
print(answer)
