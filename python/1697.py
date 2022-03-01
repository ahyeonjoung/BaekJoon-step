from collections import deque
n,k=map(int,input().split())

q=deque([(n,0)])
answer=1e9
visit=set() #효율을 위한 집합연산 

while q:
  x,cnt=q.popleft()
  if x==k and cnt<answer:
    answer=cnt
  elif cnt<=answer:
    n1,n2,n3=x-1,x+1,2*x
    if n1 not in visit and n1>=0:
      visit.add(n1)
      q.append((n1,cnt+1))
    if n2 not in visit and n2<=k:
      visit.add(n2)
      q.append((n2,cnt+1))
    if n3 not in visit and n3<=2*k:
      visit.add(n3)
      q.append((n3,cnt+1))
    
print(answer)

