#UVA 11461
from math import sqrt

num = [0]
k = 1
sum = 0
for i in range(1, 100001):
    if(i == k*k):
        k += 1
        sum += 1
    num.append(sum)

while True:
    a, b = list(map(int, input().split()))
    if(a==0 and b==0):
        break

    print(num[b] - num[a-1])