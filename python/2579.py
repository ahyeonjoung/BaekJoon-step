n=int(input())
stairs=[0]*301
for i in range(n):
  stairs[i]=int(input())
dp=[0]* n

dp[0]=stairs[0]
dp[1]=stairs[0]+stairs[1]
dp[2]=max(stairs[0]+stairs[2],stairs[1]+stairs[2])

for i in range(3,n):
  dp[i]=max(dp[i-3]+stairs[i]+stairs[i-1], dp[i-2]+stairs[i])

print(dp[n-1])