def findPrimes(num):
	primes = []
	primes.append(2)
	n = 3
	while n <= num:
		d = 2
		isPrime = True
		while isPrime and d < n/2:
			d += 1
			isPrime = False if n % d == 0 else isPrime
		if isPrime:
			primes.append(n)
		n +=2
	return primes

def NewtonMethod(num,error):
	z = 1.0;
	while abs(z*z - num) > error:
		z = z - (z*z-num)/(2.*z)
		print "%5.3f %5.3f" % (z, z*z-num)
	return z, error
	
def iterReverse(string):
	li = []
	for i in range(len(string)):
		li.append(string[-(i+1)])
	return "".join(li)

def recReverse(text):
	if text == "":
		return text
	else:
		return text[-1] + recReverse(text[:-1])

def printMultTable():
	#get list of lists
	table = list(list(range(i*1,13*i,i) for i in range(1,13)))

	width = len(str(table[-1][-1]))+1	
	for row in table:
		row = [str(n).rjust(width) for n in row]
		print(" ".join(row))
	return

def largestInt(ints):
	return sorted(ints)[-1]

def printOdds(start,end):
	start = start+1 if start % 2 == 0 else start
	while start < end:
		print "%i" % start
		start += 2
	return

def dictCounts(wordlist):
	by_count = {}
	used = []
	for word in wordlist:
		if word not in used:	
			count = wordlist.count(word)
			by_count[word] = count
			used.append(word)
	return by_count



		
