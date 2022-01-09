from collections import deque
#입력 및 위치파악
n, m = map(int, input().split())
graph = [list(input()) for _ in range(n)]

for i in range(n):
  for j in range(m):
    if graph[i][j]=='R':
      red=[i,j]
      graph[i][j]='.'
    if graph[i][j]=='B':
      blue=[i,j]
      graph[i][j]='.'

#움직이기
def move(x,y,dx,dy):
  cnt=0
  while graph[x+dx][y+dy]!='#':
    if graph[x+dx][y+dy] == 'O':
            return 0, 0, 0
    x+=dx
    y+=dy
    cnt+=1
  return x,y,cnt

#너비우선탐색
def BFS():
  visit={}
  rx,ry,bx,by=red[0],red[1],blue[0],blue[1]
  visit[rx,ry,bx,by]=0
  queue = deque([red + blue])

  while queue:
    rx,ry,bx,by=queue.popleft()
    for dx,dy in (-1, 0), (1, 0), (0, -1), (0, 1):
      nrx,nry,rmove=move(rx,ry,dx,dy)
      nbx,nby,bmove=move(bx,by,dx,dy)
      
      if not nbx and not nby:
       continue
            # 빨간 공만 탈출한 경우
      elif not nrx and not nry:
        print(visit[rx, ry, bx, by] + 1)
        return
      elif nrx == nbx and nry == nby:
        # 이동거리가 적은 구슬을 한 칸 뒤로
        if rmove > bmove:
          nrx -= dx
          nry -= dy
        else:
          nbx -= dx
          nby -= dy
      if (nrx, nry, nbx, nby) not in visit:
          visit[nrx, nry, nbx, nby] = visit[rx, ry, bx, by] + 1
          queue.append([nrx, nry, nbx, nby])
    if not queue or visit[rx, ry, bx, by] >= 10:
        print(-1)
        return
BFS()

#######
#...RB#
#.#####
#.....#
#####.#
#O....#
#######