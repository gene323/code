flag = ""
while True:
    code = int(input())
    if(code == -1):
        break
    else:
        flag = flag + chr(code)
print(flag)