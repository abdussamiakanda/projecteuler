import inflect
p = inflect.engine()
sum = 0
for i in range (1,1001):
    a = p.number_to_words(i)
    a = a.translate({ord(' '): None})
    a = a.translate({ord('-'): None})
    sum = sum + len(a)

print(sum)
