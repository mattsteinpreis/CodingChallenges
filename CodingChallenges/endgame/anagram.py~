def anagramSolution2(s1,s2):
    alist1 = list(s1)
    alist2 = list(s2)

    alist1.sort()
    alist2.sort()

    pos = 0
    matches = True

    while pos < len(s1) and matches:
        if alist1[pos]==alist2[pos]:
            pos = pos + 1
        else:
            matches = False

    return matches

f = open("latinwords.txt","r")
words = [line.rstrip('\n') for line in f]
anas = []
myword = "oplucsn"
for word in words:
	if len(word) >= 8:
		if anagramSolution2(myword, word):
			anas.append(word)

print anas

