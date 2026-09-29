import sys
from functools import lru_cache

input = sys.stdin.readline

# 12 types of sets containing 3 different cards
SETS = [
    (0, 1, 2),
    (0, 3, 6),
    (0, 4, 8),
    (0, 5, 7),
    (1, 3, 8),
    (1, 4, 7),
    (1, 5, 6),
    (2, 3, 7),
    (2, 4, 6),
    (2, 5, 8),
    (3, 4, 5),
    (6, 7, 8)
]


def solve(initial):
    @lru_cache(None)
    def dp(state):
        # Remaining identical triples
        best = sum(x // 3 for x in state)

        # Try every possible distinct-card set
        for a, b, c in SETS:
            k = min(state[a], state[b], state[c])

            if k == 0:
                continue

            s = list(state)
            s[a] -= k
            s[b] -= k
            s[c] -= k

            best = max(best, k + dp(tuple(s)))

        return best

    return dp(tuple(initial))


while True:
    line = input().strip()

    if not line:
        break

    n = int(line)

    if n == 0:
        break

    cnt = [0] * 9

    for _ in range(n):
        number, figure = input().split()

        if number == "um":
            num = 0
        elif number == "dois":
            num = 1
        else:
            num = 2

        if figure.startswith("circulo"):
            fig = 0
        elif figure.startswith("quadrado"):
            fig = 1
        else:
            fig = 2

        cnt[num * 3 + fig] += 1

    print(solve(cnt))
