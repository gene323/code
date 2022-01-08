import random
from functools import reduce
from operator import mul

def draw_lots():
    return random.choice(slotMachineList)

def money(Dict):
    if(len(Dict) == 3):
        return sum(slotMachine[i] for i in Dict)
    else:
        return reduce((lambda x, y: x*y), resNum)

slotMachine = {"7": 10000, "apple": 500, "banana": 1000, "6": 5000}
slotMachineList = ["7", "apple", "banana", "6"]
res = list([draw_lots() for i in range(3)])
print(res)
Dict = {i:res.count(i) for i in res}
resNum = [slotMachine[i] for i in res]
# print(Dict)
print(resNum)
print(money(Dict))