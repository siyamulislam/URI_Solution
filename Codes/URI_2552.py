while True:
    try:
        n, m = map(int, input().split())
    except EOFError:
        break

    board = []

    for _ in range(n):
        board.append(list(map(int, input().split())))

    for i in range(n):
        result = ""

        for j in range(m):

            # Cheese Bread
            if board[i][j] == 1:
                result += "9"
                continue

            count = 0

            # Up
            if i > 0 and board[i - 1][j] == 1:
                count += 1

            # Down
            if i < n - 1 and board[i + 1][j] == 1:
                count += 1

            # Left
            if j > 0 and board[i][j - 1] == 1:
                count += 1

            # Right
            if j < m - 1 and board[i][j + 1] == 1:
                count += 1

            result += str(count)

        print(result)
