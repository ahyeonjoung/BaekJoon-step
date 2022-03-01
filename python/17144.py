from collections import deque
R,C,T= map(int,input().split())
board=[list(map(int, input().split())) for _ in range(R)]
cleaner=[]
new=set()
for i in range(R):
  for j in range(C):
    if board[i][j]==-1:
      cleaner.append(i)


dx=[0,0,1,-1]
dy=[1,-1,0,0]

def diffusion():
  temp = [[0] * C for _ in range(R)]  # 확산값 저장
  for i in range(R):
      for j in range(C):
          if board[i][j] >= 5:
              val = 0  # 얼마나 확산했는지
              for k in range(4):
                nx=i+dx[k]
                ny=j+dy[k]
                if 0<=nx<R and 0<=ny<C and board[nx][ny]!=-1:
                  temp[nx][ny] += board[i][j] // 5
                  val += board[i][j] // 5
           
              temp[i][j] -= val  # 확산값 빼기
  for i in range(R):
      for j in range(C):
          board[i][j] += temp[i][j]  # 확산받은 값 더하기

def clean():
    ## 윗부분 반시계방향
    for i in range(cleaner[0]-2, -1, -1):
        board[i+1][0] = board[i][0]
    for i in range(1, C):
        board[0][i-1] = board[0][i]
    for i in range(1, cleaner[0]+1):
        board[i-1][-1] = board[i][-1]
    for i in range(C-2, 0, -1):
        board[cleaner[0]][i+1] = board[cleaner[0]][i]
    board[cleaner[0]][1] = 0
    ## 아랫부분 시계방향
    for i in range(cleaner[1]+2, R):
        board[i-1][0] = board[i][0]
    for i in range(1, C):
        board[-1][i-1] = board[-1][i]
    for i in range(R-2, cleaner[1]-1, -1):
        board[i+1][-1] = board[i][-1]
    for i in range(C-2, 0, -1):
        board[cleaner[1]][i+1] = board[cleaner[1]][i]
    board[cleaner[1]][1] = 0

for _ in range(T):
  diffusion()
  clean()
sumv = 0
for i in range(R):
    for j in range(C):
        if board[i][j] > 0: 
          sumv += board[i][j]
print(sumv)

