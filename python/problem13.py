file = open("data/problem13.txt", "r")
Lines = []
sum = 0
c = 0

for line in file:
    Lines.append(line)
    
for i in range (0,100):
    Lin = Lines[i]
    Lin2 = Lin.translate({ord('\n'): None})
    
    sum = sum + int(Lin2)
        
print(sum/10**(len(str(sum))-10))

file.close()
