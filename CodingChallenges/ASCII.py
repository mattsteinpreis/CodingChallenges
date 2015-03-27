import sys, math

# Auto-generated code below aims at helping you parse
# the standard input according to the problem statement.

L = int(raw_input())
H = int(raw_input())
T = raw_input()
ROW = []
for i in xrange(H):
    ROW.append(raw_input())

LETTERS = "ABCDEFGHIJKLMNOPQRSTUVWXYZ?"

outArt = ["" for i in range(H)]

for let in T:
    let = let.upper() if let.isalpha() else let
    place = LETTERS.find(let)
    place = 26 if place == -1 else place
    for i in range(H):
        outArt[i] += ROW[i][place*L:(place+1)*L]

for i in xrange(H):
    print outArt[i]
	
