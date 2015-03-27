def drawletter(numlist,turt):
	for num in numlist:
		drawline(num,turt)
	

def drawline(num,turt):
	turt.setheading(90-30*num[0])
	turt.forward(5*num[1])

def drawingscript(mynums):
	xPos = -250
	yPos = 0
	import turtle
	myscreen = turtle.Screen()
	myturt = turtle.Turtle()        
	for group in mynums:
		myturt.penup()
		myturt.goto(xPos,yPos)
		myturt.pendown()
		drawletter(group,myturt)
		xPos = xPos + 60;
		#yPos = yPos - 60;
		


