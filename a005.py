#zerojudge a005
q = [[(lambda i: print(i[0], i[1], i[2], i[3], i[3]*2-i[2]) if i[1] - i[0] == i[3] - i[2] else print(i[0], i[1], i[2], i[3], i[3]*(i[3]//i[2])))(list(map(int, input().split()))) for x in range(1)] for j in range(int(input()))]
