"""
This code searches through a text file and prints out all alphabetic characters
"""


f = open('chall2.txt','r')

myli = []

while True:
	c = f.read(1)
	if not c:
		print "End of File"
		break
	if c.isalpha():
		myli.append(c)

print "".join(myli)
