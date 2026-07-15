n = int(input())

# direct
# print(hex(n)[2:].upper())

# manual
digits = "0123456789ABCDEF"
ans = ""

while n > 0:
    ans = digits[n % 16] + ans
    n //= 16

print(ans)

