file = open("data/problem8.txt", "r")
Lines = []
max = 0

for line in file:
    for i in range (0,988):
        mult = int(line[i])*int(line[i+1])*int(line[i+2])*int(line[i+3])*int(line[i+4])*int(line[i+5])*int(line[i+6])*int(line[i+7])*int(line[i+8])*int(line[i+9])*int(line[i+10])*int(line[i+11])*int(line[i+12])
        if mult > max:
            max = mult

print(max)

file.close()
