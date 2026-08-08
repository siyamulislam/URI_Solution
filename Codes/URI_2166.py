n = int(input())

result = 1.0

for _ in range(n):
    result = 1 + 1 / (1 + result)

print(f"{result:.10f}")
