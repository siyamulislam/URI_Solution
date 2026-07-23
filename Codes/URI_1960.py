n = int(input())

values = [1000,900,500,400,100,90,50,40,10,9,5,4,1]
romans = ["M","CM","D","CD","C","XC","L","XL","X","IX","V","IV","I"]

ans = ""

for i in range(len(values)):
    while n >= values[i]:
        ans += romans[i]
        n -= values[i]

print(ans)
