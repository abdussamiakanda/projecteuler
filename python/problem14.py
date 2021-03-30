max = 0

for i in range (2,1000000):
    c=0
    num = i
    while num != 1:
        if num%2 == 0:
            num = num/2
            c+=1
        else:
            num = 3*num +1
            c+=1
    if c > max:
        max = c
        num2 = i
        
print(num2)
