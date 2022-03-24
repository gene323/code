#UVA 10302
#calculate cube sum
from sys import stdin

for line in stdin:
    x = int(line)
    print(x*x*(x+1)*(x+1)//4)