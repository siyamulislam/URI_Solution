A1 = int(input())
A2 = int(input())
A3 = int(input())

floor1 = A2 * 2 + A3 * 4
floor2 = A1 * 2 + A3 * 2
floor3 = A1 * 4 + A2 * 2

print(min(floor1, floor2, floor3))
