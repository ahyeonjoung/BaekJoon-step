t=int(input())
p=[0]* 100
p[0],p[1],p[2]=1,1,1

def triangle(n):
  if p[n]!=0:
    return p[n]
  else:
    p[n]=triangle(n-2)+triangle(n-3)
    return p[n]

for i in range(t):
  n=int(input())
  print(triangle(n-1))
