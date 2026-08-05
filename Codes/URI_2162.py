n = int(input())
a = list(map(int, input().split()))

ok = True

prev = a[1] - a[0]

if prev == 0:
    ok = False

for i in range(2, n):
    cur = a[i] - a[i - 1]

    if cur == 0 or (cur > 0) == (prev > 0):
        ok = False
        break

    prev = cur

print(1 if ok else 0)
