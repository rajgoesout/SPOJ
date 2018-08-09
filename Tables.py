# https://www.spoj.com/problems/AE1B/

n, k, s = input().split()
n = int(n)
k = int(k)
s = int(s)

screwsRequired = k * s

a = list(map(int, input().split()))

a.sort()
a.reverse()

sum = 0
j = 0

for box in a:
    sum = sum + box
    j = j + 1
    if sum >= screwsRequired:
        break

print(j)
