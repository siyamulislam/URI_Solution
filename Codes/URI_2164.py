from math import sqrt

n = int(input())

sqrt5 = sqrt(5)
phi = (1 + sqrt5) / 2
psi = (1 - sqrt5) / 2

fib = (phi ** n - psi ** n) / sqrt5

print(f"{fib:.1f}")
