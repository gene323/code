time = 1
while True:
    n, q = (input().split())
    n = int(n)
    q = int(q)
    if(n + q == 0):
        break

    marble = []
    while(n > 0):
        temp = int(input())
        marble.append(temp)
        n = n - 1

    marble.sort()
    print("CASE# " + str(time) + ":")
    for i in range(q):
        temp = int(input())
        point = -1
        for j in range(len(marble)):
            if(temp == marble[j]):
                point = j+1
                break
        if(point > 0):
            print(str(temp) + " found at " + str(point))
        else:
            print(str(temp) + " not found")

    time = time + 1