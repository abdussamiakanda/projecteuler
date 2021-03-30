def d(y):
    return sum(x for x in range(1, y // 2 + 1) if not (y % x))

s = []

for i in range(1, 10000):
    m = d(i)
    n = d(m)
    if (i == n) and (m != n):
        s.append(m)

print(sum(s))
