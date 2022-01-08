#UVA 10871
from math import sqrt
#judge the prime number
def isPrime(x):
    for i in range(2, x, 1):
        if(x % i == 0):
            return False
    return True

time = int(input())
while(time > 0):
    numstr = input()
    num = list(map(int, numstr.split()))
    n = num[0]
    del num[0]

    num2 = []
    num2.append(num[0])
    for i in range(1, n):
        num2.append(num2[i-1]+num[i])
    
    judge = False
    point = 0
    len = 0
    for i in range(1, n):
        for j in range(0, n-i):
            if(isPrime(num2[j+i]-num2[j]+num[j])):
                judge = True
                point = j
                len = i
            if(judge):
                break
        if(judge):
            break
    if(judge):
        print("Shortest primed subsequence is length "+str(len+1)+":",end='')
        for i in range(0, len+1):
            print(" " + str(num[i+point]),end='')
    else:
        print("This sequence is anti-primed.",end='')
    print("")
    time -=1