s = input().strip()

ones = s.count('1')

if ones % 2 == 0:
    print(s + '0')
else:
    print(s + '1')
