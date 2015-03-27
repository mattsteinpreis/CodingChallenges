"""
This code shows a long and short way to translate code using a simple shift.

"""

import string
from string import maketrans

myli = list("http://www.pythonchallenge.com/pc/def/map.html")

mynewli = []

llen = len(myli)
print llen



for i in range(0,llen):
	boolint = 0
	for j in range(0,26):
		if myli[i] == string.ascii_lowercase[j]:
			boolint = 1
			if(j==24):
				mynewli.append("a")
				break
			elif(j==25):
				mynewli.append("b");
				break
			else:
				mynewli.append(string.ascii_lowercase[j+2])
				break
			break
	if(boolint == 0):
		mynewli.append(myli[i])	

print "".join(mynewli)

intab = "abcdefghijklmnopqrstuvwxyz.()/"
outtab = "cdefghijklmnopqrstuvwxyzab.()/"
trantab = maketrans(intab,outtab)

mystr = "".join(myli)

print mystr.translate(trantab)
