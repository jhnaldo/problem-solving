import math

t = int(input())
for _ in range(t):
    x1, y1, r1, x2, y2, r2 = map(int, input().split())
    d = math.dist([x1, y1], [x2, y2])
    a, b, c = sorted([d, r1, r2])
    if (d == 0) and (r1 == r2):
        print(-1)
    elif a + b < c:
        print(0)
    elif a + b == c:
        print(1)
    else:
        print(2)
