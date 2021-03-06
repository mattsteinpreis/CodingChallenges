def isbn_valid(teststr):
	s = [l for l in teststr if (l.isdigit() or l.lower() == "x")];
	num = (10 if s[-1].lower() == 'x' else int(s[-1])) + sum([int(x)*y for (x,y) in zip(s[:9],range(10,0,-1))]);
	return num % 11 is 0

def isValidISBN(testString):
    R = [x for x in testString if x.isdigit() or x.lower() == "x"]
    num = (10 if R[-1].lower() == "x" else int(R[-1])) + sum([int(x)*y for x,y in zip(R[:9],range(10,0,-1))])
    return (num % 11 == 0)
