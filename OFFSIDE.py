# https://www.spoj.com/problems/OFFSIDE/

while True:
	a, d = input().split()
	a = int(a) # attacking
	d = int(d) # defending

	if a == 0 and d == 0:
		break

	b = [int(x) for x in input().split()] # a integers
	c = [int(y) for y in input().split()] # d integers

	b.sort()
	c.sort()

	second_last_opp = c[1]

	os = False

	if b[0] < second_last_opp:
		os = True

	if os:
		print("Y")
	else:
		print("N")
