n = int(input())

x = 0.0

for _ in range(n):
    x = 1 / (6 + x)

print(f"{3 + x:.10f}")
