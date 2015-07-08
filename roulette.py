import random

def bet_red(times):
    s = 0
    l = 0
    for i in range(times):
        total = 1
        if random.randint(0, 1) == 0:
            s += 1
            total += 35
        else:
            total -= 1
            l += 1
bet_17(500)
bet_red(500)


def bet_17(times):
    s = 0
    l = 0

    for i in range(times):
        total = 1
        if random.randint(1,20) == 17:
            s += 1
            total += 35
            s_total.append(i)
        else:
            l_total.append(i)
            total -= 1
            l += 1
        
    print ("You won on 17: " + str(s))
    print ("You lost on 17: " + str(l))