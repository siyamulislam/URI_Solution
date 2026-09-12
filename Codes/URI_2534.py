import sys

input = sys.stdin.readline

while True:
    line = input()

    if not line:
        break

    n, q = map(int, line.split())

    grades = []

    for _ in range(n):
        grades.append(int(input()))

    # বড় থেকে ছোট sort
    grades.sort(reverse=True)

    for _ in range(q):
        position = int(input())

        print(grades[position - 1])
