n=int(input())

arr=[int(i) for i in input().split()]

arr.sort()
i=int(n/2)

print(arr[i]-arr[i-1])
