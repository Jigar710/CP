t = int(input())
lst = []
for i in range(t):
    n = input()
    temp = list(map(int,input().split(" ")))
    lst.append(temp[-1::-1])

for i in lst:
    for j in i:
        print(j,end=" ")
