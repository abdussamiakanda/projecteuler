import calendar

calendar.setfirstweekday(6) #6-Sunday

def sundays(year):
	counter = 0
	for month in range(1,13):
		cal = calendar.monthcalendar(year,month)
		if cal[0][0] == 1:
			counter += 1
	return counter

total = 0

for i in range(1901,2001):
	total += sundays(i)

print("{}".format(total))
