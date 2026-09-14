import sys

data = list(map(int, sys.stdin.buffer.read().split()))

index = 0
output = []

while index < len(data):
    n = data[index]
    user_id = data[index + 1]
    index += 2

    count = 0

    for _ in range(n):
        player_id = data[index]
        game = data[index + 1]
        index += 2

        if player_id == user_id and game == 0:
            count += 1

    output.append(str(count))

print("\n".join(output))
