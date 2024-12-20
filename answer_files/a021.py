import sys
for s in sys.stdin:
  a,b,c = s.split()
if b == '+':
	print(int (a) + int (c));
elif b == '-':
	print(int (a) - int (c));
elif b == '*':
	print(int (a) * int (c));
elif b == '/' :
	print(int (a) // int (c));