n = input("Enter a number: ")
factorial = 1
if int(n) >= 1:
    for i in range (1,int(n)+1):
        factorial = factorial * i

a = []
a = str(factorial)

o = len(str(factorial))

sum = 0
for j in range (0,o):
       sum = sum + int(a[j])

print(sum)
