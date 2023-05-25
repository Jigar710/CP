n = int(input())
lst = []
for i in range(n):
    lst.append(input())

result = []
for i in lst :
    l = len(i)
    if(len(i)>10):
        temp = i[0] + str(l-2) + i[l-1]
        result.append(temp)
    else:
        result.append(i)
for i in result:
    print(i)