first = 0
second = 1
next = 0
n = 10000
sum = 0
final = 0

for i in range (1,n+1):
    if i <= 1:
        next=second
        second=next
    else:
        next=first+second
        first=second
        second=next
    sum+=next
    
    if len(str(next)) == 1000:
        final = i
        break
    
print(final)
