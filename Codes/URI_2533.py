import sys

input = sys.stdin.readline

while True:
    line = input()

    if not line:
        break

    m = int(line)

    total_grade = 0
    total_workload = 0

    for _ in range(m):
        n, c = map(int, input().split())

        total_grade += n * c
        total_workload += c

    api = total_grade / (100 * total_workload)

    print(f"{api:.4f}")
