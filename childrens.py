import random

def children_until_both_genre(number):
    s = 0
    bool_g = False
    bool_b = False
    total_s = list()
    for j in range(number):
        total_s.append(s)
        bool_g = False
        bool_b = False
        s = 0
        for i in range(100):
            if random.randint(0,1) == 1:
                if bool_g and bool_b == False:
                    s +=1
                    bool_b = True
                else:
                    bool_b = True
                    s +=1
            if random.randint(0,1) == 0:
                if bool_b and bool_g == False:
                    s +=1
                    bool_g = True
                else:
                    bool_g = True
                    s += 1
            if bool_g and bool_b:
                break;

    print ("Until both genre: " + str((sum(total_s)/number)))

def children_until_boy(number):
    s = 0
    total_s = list()
    for j in range(number):
        total_s.append(s)
        s = 0
        for i in range(100):
            if random.randint(0,1) == 1:
                s += 1
                break
            else:
                s +=1

    print ("Until a boy: " + str(sum(total_s)/number))

children_until_boy(10000)
children_until_both_genre(100000)