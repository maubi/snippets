#!/usr/bin/python

list1 = [10, 20, 30]
list2 = [40, 50, 60]

print list1[1]

print list1[0:2]

print list1 * 2

print list1 + list2

list1 = []
list1.append('10')
list1.append('20')
list1.append('30')
print list1
list1[0] = 500
list1[1] = 100
list1[2] = 400
list1.append(300)
# list1[3] = 400 (error! index out of range)
print list1
del list1[-1]
print list1

print list1[::2]

value1 = list1.pop(0)
print list1
print value1

list1.sort()
print list1
