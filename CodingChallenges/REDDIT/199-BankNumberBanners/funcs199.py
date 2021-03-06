def GetDigit(integer):

	line1 = " _     _  _     _  _  _  _  _ "
	line2 = "| |  | _| _||_||_ |_   ||_||_|"
	line3 = "|_|  ||_  _|  | _||_|  ||_| _|"

	return [line1[integer*3:(integer*3+3)], \
		line2[integer*3:(integer*3+3)], \
		line3[integer*3:(integer*3+3)]] 


def ParseString(string):

	line1=""
	line2=""
	line3=""

	ints = [int(l) for l in string]
	for i in ints:
		lines = GetDigit(i)
		line1 += lines[0]
		line2 += lines[1]
		line3 += lines[2]
	
	return[line1,line2,line3]

def PrintParsedString(string):

	lines = ParseString(string)

	print
	print lines[0]
	print lines[1]
	print lines[2]
	print


	
