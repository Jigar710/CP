lst = list(map(int,input().split()))
l = len(lst)
for i in range(l):
    for j in range(l-i-1):
        if(lst[j]>lst[j+1]):
            lst[j],lst[j+1] = lst[j+1],lst[j]
print(lst)