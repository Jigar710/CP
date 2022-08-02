n,k = map(int,input().split(" "))
lst = list(map(int,input().split(" ")))
count = 0
for i in lst:
    if(i >= lst[k-1] and i>0):
        count = count + 1
print(count)