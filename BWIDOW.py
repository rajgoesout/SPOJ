# https://www.spoj.com/problems/BWIDOW/

def largest_index(a, n):
	max = a[0]
	j=0
	for i in range(1, n):
		if a[i]>max:
			max = a[i]
			j=i

	return j+1


def largest(a, n):
	max = a[0]
	for i in range(1, n):
		if a[i]>max:
			max = a[i]

	return max


def second_largest(numbers):
    count = 0
    m1 = m2 = float('-inf')
    for x in numbers:
        count += 1
        if x > m2:
            if x >= m1:
                m1, m2 = x, m1            
            else:
                m2 = x
    return m2 if count >= 2 else None


t = int(input())

for i in range(t):
	n = int(input())
	r = []
	R = []
	for j in range(n):
		a, b = input().split()
		a = int(a)
		b = int(b)
		r.append(a)
		R.append(b)

	x = largest_index(r, n)
	xe = largest(r, n)
	y = largest_index(R, n)

	if x==y and second_largest(r)!=xe:
		se = second_largest(R)
		if xe>se:
			print(x)
		else:
			print(-1)
	else:
		print(-1)
