t = int(input())

for i in range(t):
  sticker = []
  n = int(input())
  sticker.append(list(map(int, input().split())))
  sticker.append(list(map(int, input().split())))
  for j in range(1, n):
    if j == 1:
      sticker[0][1] += sticker[1][0]
      sticker[1][1] += sticker[0][0]
    else:
      sticker[0][j] += max(sticker[1][j - 1], sticker[1][j - 2])
      sticker[1][j] += max(sticker[0][j - 1], sticker[0][j - 2])
  print(max(sticker[0][n - 1], sticker[1][n - 1]))
