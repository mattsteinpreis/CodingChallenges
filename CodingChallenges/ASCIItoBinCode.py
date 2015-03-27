def Chuck(str_in):

	import binascii

	MESSAGE = str_in

	MESSAGE = bin(int(binascii.hexlify(MESSAGE), 16))
	MESSAGE = MESSAGE.replace("0b","")
	MESSAGE += "?"
	answer = ""
	i=0
	while MESSAGE[i] != "?":
		bit1 = "0" if MESSAGE[i] == "1" else "00"
		count = 1
		while MESSAGE[i] == MESSAGE[i+1]:
			count +=1
			i +=1
		i += 1
		answer += bit1+" "+count*"0"+" "
	answer = answer[:len(answer)-1]

	print answer
