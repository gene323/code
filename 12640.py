#UVA 12640
#the largest subarray sum
from sys import stdin 

for string in stdin:
    if string == '':
        break
    num = string.split()
    MAX = 0
    sum = int(num[0])
    for i in num:
        MAX += int(i)
        sum = max(sum, MAX)
        MAX = max(MAX, 0)
    if(sum <= 0):
        print(0)
    else:
        print(sum)
