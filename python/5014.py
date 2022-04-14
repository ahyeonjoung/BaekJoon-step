from collections import deque
f,s,g,u,d=map(int,input().split())
q=deque()
q.append((s,0))
min_value=int(1e9)
visited=set([s])

while q:
  now, cnt=q.popleft()
  if now==g:
    min_value=min(min_value, cnt)
  else:
    if now + u <=f and now+u not in visited:
        q.append((now+u,cnt+1))
        visited.add(now+u)
    if now-d>=1 and now -d not in visited:
      q.append((now-d,cnt+1))
      visited.add(now-d)

if g not in visited:
  print("use the stairs")
else:
  print(min_value)


