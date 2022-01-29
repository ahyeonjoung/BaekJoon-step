def rotate(arr):
    n = len(arr)
    ret = [[0] * n for _ in range(n)]
    for i in range(n):
        for j in range(n):
            ret[j][n-1-i] = arr[i][j]
    return ret

def check(board):
    bridge = [False for i in range(n)]

    for i in range(n - 1):
        if board[i] == board[i + 1]: #숫자 같은 경우
            continue

        if abs(board[i] - board[i + 1]) > 1: #2이상 차이나는경우
            return False

        if board[i] > board[i + 1]:
            temp = board[i + 1]
            for j in range(i + 1, i + 1 + l):
                if 0 <= j < n:
                    if board[j] != temp: #높이 안맞으면 
                      return False
                    if bridge[j] == True: #이미 다리 있으면 
                      return False
                    bridge[j] = True #다리 놓기 
                else:
                    return False
        else:
            temp = board[i]
            for j in range(i, i - l, -1):
                if 0 <= j < n:
                    if board[j] != temp: return False
                    if bridge[j] == True: return False
                    bridge[j] = True
                else:
                    return False
    return True

n, l = map(int, input().split())
s = []
for i in range(n):
    s.append(list(map(int, input().split())))

cnt = 0
for i in s:
    if check(i):
        cnt += 1

s=rotate(s) #90도회전 

for i in s:
    if check(i):
        cnt += 1
print(cnt)
