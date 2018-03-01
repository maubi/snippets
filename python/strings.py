#!/usr/bin/python

string1 = "Lain"

c = 0
while c < 4: 
    print string1[c]
    c += 1

print string1[0:2]

print string1 + " " + "Iwakura"

if ( 'a' in string1 and 'b' not in string1):
    print "OK!"
else:
    print "ERROR!"


print string1 + ' ' + str(5)

print string1 * 5

for i in range(len(string1)):
    print string1[i]

string2 = string1[::2]
print string2
string2 = string1[::-2]
print string2
string2 = string1.upper()
print string2
