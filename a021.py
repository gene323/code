#zerojudge a021
string = input()
arr = string.split(' ');
num1 = int(arr[0])
num2 = int(arr[2])
op = arr[1]
if(op == '+'):
    print(num1+num2)
elif(op == '-'):
    print(num1-num2)
elif(op == '/'):
    print(num1//num2)
else:
    print(num1*num2)

