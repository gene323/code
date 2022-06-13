ans = 1
for i in range(1, 101):
    temp = 1
    for j in range(1, i+1):
        temp = temp * j
    ans = ans * temp

s = ''
while(ans > 0):
    s += chr(ans % 10 + 48)
    ans = ans // 10

#reverse string
s = s[::-1]
for i in s:
    print(i)
