from collections import deque
M,N,H=map(int,input().split())
tomato=[[] for i in range(H)]
complete=[]
cnt=0
last_tomato=0
dx=[1,-1,0,0,0,0]
dy=[0,0,-1,1,0,0]
dh=[0,0,0,0,1,-1]

for i in range(H):
    for j in range(N):
        tomato[i].append(list(map(int, input().split())))

for i in range(H):
  for j in range(N):
    for k in range(M):
      if tomato[i][j][k]==1:
        complete.append((i,j,k,0))

def bfs():
  q=deque(complete)
  visited=set()
  while q:
    h,x,y,cnt=q.popleft()
    if cnt>max_value:
      max_value=cnt
    visited.add((h,x,y))
    for i in range(6):
      nx=x+dx[i]
      ny=y+dy[i]
      nh=h+dh[i]
      if 0<=nx<N and 0<=ny<M and 0<=nh<H:
        if tomato[nh][nx][ny]==0 and (nh,nx,ny) not in visited:
            q.append((nh,nx,ny,cnt+1))
            tomato[nh][nx][ny]]=1
            #tomato[nh][nx][ny]=tomato[h][x][y]+1
  return -1

bfs()
flag=True
max_val=0
for i in range(H):
  for j in range(N):
    for k in range(M):
      if tomato[i][j][k]==0:
        flag=False
      max_val=max(max_val, tomato[i][j][k])


if flag:
  print(max_val-1)
  
else:
  print(-1)

