lst = list(map(int,input().split()))

for i in range(len(lst)):
    min = lst[i]
    for j in range(i,len(lst)):
        if(min>lst[j]):
            min,lst[j] = lst[j],min
    lst[i] = min

print(lst)
            
"""
selection sort :

Time Complexity => O(n2): The time complexity of Selection Sort is O(N2) as there are two nested loops:

One loop to select an element of Array one by one = O(N)
Another loop to compare that element with every other Array element = O(N)
Therefore overall complexity = O(N)*O(N) = O(N*N) = O(N2)

Auxiliary Space => O(1) : as the only extra memory used is for temporary variable while swapping two values in Array. The good thing about selection sort is it never makes more than O(n) swaps and can be useful when memory write is a costly operation. 
"""