
def isAnagram(str1,str2):
	x = [str1,str2]
	#x = re.sub("['.,]","",s) for s in x
	x = [s.lower() for s in x]
	x = [s.replace(" ","") for s in x]
	return sorted(x[0]) == sorted(x[1])


		
