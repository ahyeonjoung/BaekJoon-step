import itertools

n,m=map(int,input().split())
board=[list(map(int, input().split())) for _ in range(n)]
chicken=[]
distance=[]
for i in range(n):
  for j in range(n):
    if board[i][j]==2:
      chicken.append([i,j])
chicken=list(itertools.combinations(chicken,m))

def chi_dist(r1,c1,chicken):
  temp=3000
  for chi in chicken:
    r2,c2=chi[0],chi[1]
    dist=abs(r1-r2)+abs(c1-c2)
    temp=min(temp,dist)
  return temp

for chi in chicken:
  temp=0
  for i in range(n):
    for j in range(n):
      if board[i][j]==1:
        temp+=chi_dist(i,j,chi)
  distance.append(temp)

print(min(distance))




