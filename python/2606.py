com=int(input())
queries=int(input())
network = [[] for i in range(com)]
virus=[False for i in range(com)]

for i in range(queries):
  n,m=map(int, input().split())
  network[n-1].append(m)
  network[m-1].append(n)


def check(n):
  for i in network[n-1]:
    if virus[i-1]==False:
      virus[i-1]=True
      check(i) 

check(1)
print(virus.count(True)-1)
