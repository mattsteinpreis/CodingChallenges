import zipfile

zip = zipfile.ZipFile(open('channel.zip','r'))

myfile = "%s.txt"

nothing = '90052'
comments = [] #The answer is *in* the zip..
while True:
		raw_data = zip.read(myfile % nothing)
		nothing = int(raw_data.split("is ")[-1])
		comments.append(zip.getinfo(myfile % nothing).comment)
		print "".join(comments)


