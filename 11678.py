#UVA 11678
while True:
    #How many cards alice have and betty have
    a, b = list(map(int, input().split()))
    if(a == 0 and b == 0):
        break
    #to avoid the repeat number in set of card
    alice = set(map(int, input().split()))
    betty = set(map(int, input().split()))
    #to get two people union of card
    total = (alice | betty)
    print(min(len(total) - len(alice), len(total) - len(betty)))
