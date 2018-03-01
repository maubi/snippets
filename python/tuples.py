#!/usr/bin/python

tuple1 = (10, 20, 30)

for elem in tuple1:
    print elem
else: print "END"

for index in range(len(tuple1)):
    print tuple1[index]
else: print "END"

first, second, third = tuple1

print str(first) + ' ' + str(second) + ' ' + str(third)

list1 = list(tuple1)
print list1
tuple2 = tuple(list1)
print tuple2

tuple3 = ('Lain Iwakura',)      # definition of a tuple with 1 value
#tuple4 = (,)                    # definition of a tuple with 0 values(?)

print tuple3
