n = int(input())
rpm = list(map(int, input().split()))

answer = 0

for i in range(1, n):
    if rpm[i] < rpm[i - 1]:
        answer = i + 1
        break

print(answer)
