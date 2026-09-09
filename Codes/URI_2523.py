import sys

input = sys.stdin.readline

while True:
    letters = input().strip()

    if not letters:
        break

    n = int(input())
    bulbs = list(map(int, input().split()))

    message = ""

    for bulb in bulbs:
        message += letters[bulb - 1]

    print(message)
