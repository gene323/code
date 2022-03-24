#UVA 11849
from sys import stdin, stdout

out = []
while True:
    a, b = list(map(int, stdin.readline().strip().split()))
    
    if(a == 0 and b == 0):
        break

    seta = set()
    for i in range(a):
        seta.add(int(stdin.readline().strip()))
    
    sum = 0
    for i in range(b):
        if(int(stdin.readline().strip()) in seta):
            sum += 1
    out.append(sum)
stdout.writelines("%s\n" % i for i in out)
        