import math

t = int(input())

def inclusion_check(n, plans, a, b):
    check = []
    for i in range(n):
        x, y, r = plans[i]
        d = math.dist([a, b], [x, y])
        check.append(d < r)
    return check


for _ in range(t):
    x1, y1, x2, y2 = map(int, input().split())
    n = int(input())
    plans = []
    for _ in range(n):
        x, y, r = map(int, input().split())
        plans.append((x, y, r))

    start_check = inclusion_check(n, plans, x1, y1)
    end_check = inclusion_check(n, plans, x2, y2)

    count = 0
    for i in range(n):
        if start_check[i] != end_check[i]:
            count += 1
    print(count)
