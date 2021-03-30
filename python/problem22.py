def position(x):
    return (ord(x)-64)

file = open("data/prb22_names.txt", "r")
tot = 0

splitLine = sorted(file.read().replace('"','').split(','))

for i in range (0,len(splitLine)):
    sum = 0
    b = splitLine[i]
    for j in range (0,len(splitLine[i])):
        sum = sum + (position(b[j]))
        c = sum * (i+1)
    tot = tot + c

print(tot)

file.close()
