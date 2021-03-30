def palin(n):
    temp = n
    rev = 0
    rev = str(n) [::-1]
    if(temp == int(rev)):
        c = 1
    else:
        c = 0
    return c

summ = 0

for i in range(1,1000000):
    if palin(i) == 1:
        if palin(int("{0:b}".format(i))) == 1:
            summ = summ + i

print(summ)
