n,k = map(int,input().split())
array = list(map(int,input().split()))
for i in range(k):
    array[i:n:k] = sorted(array[i:n:k])
answer = "Yes"
for i in range(n):
    if array[i] != i:
        answer = "No"
print(answer)
