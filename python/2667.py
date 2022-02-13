from collections import deque
n=int(input())
board=[list(map(int,list(input()))) for _ in range(n)]
dy=[0,0,1,-1]
dx=[1,-1,0,0]
result=[]
def bfs(x,y):
  if board[x][y]==0:
    return
  queue = deque()
  board[x][y]=0
  queue.append((x,y))
  answer=1

  while queue:
    x,y=queue.popleft() 
    for i in range(4):
      if 0<=x+dx[i]<n and 0<=y+dy[i]<n:
        nx=x+dx[i]
        ny=y+dy[i]
        if board[nx][ny]==1:
          queue.append((nx,ny))
          board[nx][ny]=0
          answer+=1
  result.append(answer)

for i in range(n):
  for j in range(n):
    if board[i][j]==1:
      bfs(i,j)

result.sort()
print(len(result))
for t in result:
  print(t)



