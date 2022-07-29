w = int(input())

def watermalon(w):
    temp = 2
    while(temp < w):
        if((w - temp)%2 == 0):
            print("YES")
            return
        temp = temp + 2
    print("NO")
    return


watermalon(w)
