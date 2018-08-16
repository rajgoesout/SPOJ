# https://www.spoj.com/problems/FCTRL2/

t = int(input())
for i in range(t):
	f, j = 1, 1
	n = int(input())
	while j <= n:
		f *= j
		j=j+1
	print(f)
