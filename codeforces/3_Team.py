no_of_problems = int(input())
count = 0
for i in range(no_of_problems):
    prepareList = list(map(int,input().split(" ")))
    s = sum(prepareList)
    if(s >= 2):
        count = count + 1
print(count)