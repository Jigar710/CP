lst = list(map(int,input().split()))
k = int(input())
l = 0
h = len(lst)-1
while l != h:
    mid = (l+h)//2
    if lst[mid] == k:
        print(mid)
    if lst[mid] > k:
        h = mid-1
    else:
        l = mid+1
