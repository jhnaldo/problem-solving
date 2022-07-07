t = int(input())

# memoization
memo = [(1,0), (0,1)]
for i in range(2, 41):
    x2, y2 = memo[i - 2]
    x1, y1 = memo[i - 1]
    memo.append((x2 + x1, y2 + y1))

for _ in range(t):
    n = int(input())
    x, y = memo[n]
    print(x, y)
