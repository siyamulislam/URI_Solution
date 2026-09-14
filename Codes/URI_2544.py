import sys

for line in sys.stdin:
    n = int(line.strip())

    count = 0

    while n > 1:
        n //= 2
        count += 1

    print(count)
