n = 1001
sum = 1

for i in range (1,int((n+1)/2)):
    sum = sum + ((16*i**2)+(4*i)+4)

print(sum)
