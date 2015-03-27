"""
this code loads a pickled file. each item in the file was a duple of a space of
a hash followed by the number of them. it printed out a picture.
"""


import urllib,pickle

myurl="http://www.pythonchallenge.com/pc/def/banner.p"

grab = urllib.urlopen(myurl)
myobj = pickle.load(grab)
grab.close()

print myobj

for item in myobj:
	print "".join(i[0]*i[1] for i in item)
