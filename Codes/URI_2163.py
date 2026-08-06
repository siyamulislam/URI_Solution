N, M = map(int, input().split())

a = [list(map(int, input().split())) for _ in range(N)]

for i in range(1, N - 1):
    for j in range(1, M - 1):
        if (
            a[i][j] == 42 and
            a[i-1][j-1] == 7 and
            a[i-1][j] == 7 and
            a[i-1][j+1] == 7 and
            a[i][j-1] == 7 and
            a[i][j+1] == 7 and
            a[i+1][j-1] == 7 and
            a[i+1][j] == 7 and
            a[i+1][j+1] == 7
        ):
            print(i + 1, j + 1)
            exit()

print(0, 0)
