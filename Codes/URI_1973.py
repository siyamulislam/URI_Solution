n = int(input())
sheep = list(map(int, input().split()))

visited = [False] * n

total = sum(sheep)
attacked = 0
i = 0

while 0 <= i < n:

    if not visited[i]:
        visited[i] = True
        attacked += 1

    cur = sheep[i]

    if cur > 0:
        sheep[i] -= 1
        total -= 1

    if cur % 2:
        i += 1
    else:
        i -= 1

print(attacked, total)
