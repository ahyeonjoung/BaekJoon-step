def check(arrs):
  maxNum,nx,ny=0,0,0
  for arr in arrs:
    x,y=arr[0],arr[1]
    for i in range(4):
      if 0<=x+dx[i]<n and 0<=y+dy[i]<m and [x+dx[i],y+dy[i]] not in arrs:
        temp=graph[x+dx[i]][y+dy[i]]
        if temp>=maxNum:
          maxNum=temp
          nx=x+dx[i]
          ny=y+dy[i]
  return maxNum,nx,ny

def DFS(cnt,x,y,sumNum,arrs,answer):
  if cnt==4:
      answer.append(sumNum)
  else:
    arrs.append([x,y])
    maxNum,nx,ny=check(arrs)
    DFS(cnt+1,nx,ny,sumNum+maxNum,arrs,answer)

n, m = map(int, input().split())
graph = [list(map(int, input().split())) for _ in range(n)]

dx = [0, 0, -1, 1]
dy = [1, -1, 0, 0]
answer=[]
for i in range(n):
  for j in range(m):
    DFS(1,i,j,graph[i][j],[],answer)

print(max(answer))




      