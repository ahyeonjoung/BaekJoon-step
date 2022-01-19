import itertools
from collections import deque
import copy


dy=[0,0,1,-1]
dx=[1,-1,0,0]

def virus(n,m,graph):
  result=0
  queue = deque()
  for i in range(n):
    for j in range(m):
      if graph[i][j]==2:
        queue.append([i,j])

  while queue:
    x,y=queue.popleft()
    for k in range(4):
      ix=dx[k]
      iy=dy[k]
      if 0<=x+ix<n and 0<=y+iy<m:
        if graph[ix+x][y+iy]==0:
          graph[x+ix][y+iy]=2
          queue.append([ix+x,iy+y])
          result+=1
  return result
  

n,m=map(int,(input().split()))
graph=[list(map(int, input().split())) for _ in range(n)]
answer=[]

zero=[]
for i in range(n):
  for j in range(m):
    if graph[i][j]==0:
      zero.append([i,j])
zeroNum=len(zero)
wall=list(itertools.combinations(zero,3))
for w in wall:
  graphCopy=copy.deepcopy(graph)
  for i in w:
    graphCopy[i[0]][i[1]]=1
  temp=virus(n,m,graphCopy)
  answer.append(temp)


print(zeroNum-min(answer)-3)
#print(virus(n,m,graph))