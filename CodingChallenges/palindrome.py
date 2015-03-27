def nextPalindrome(num):
	from math import ceil
	digits = 0;
        n = num
	while n >= 1:
		n /= 10.
        	digits += 1
	isEven = True if digits %2 == 0 else False
	mid_digit = digits/2 if isEven else ceil(digits/2.)
	mid_digit = int(mid_digit)
	numli = list(str(num))

	for i in range(mid_digit):
		numli[-(i+1)] = numli[i] 

	pal = int("".join(numli))
	
	if pal <= num:
		numli[mid_digit-1] = str(int(numli[mid_digit-1])+1)
		if isEven:
			numli[mid_digit] = str(int(numli[mid_digit])+1)
		pal = int("".join(numli))

	return pal
