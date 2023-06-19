board = [["-" for _ in range(3)] for _ in range(3)]

def draw_board():
  for row in board:
    print(" ".join(row))

def take_turn(player):
  while True:
    row = int(input("Enter row (0, 1, 2): "))
    col = int(input("Enter column (0, 1, 2): "))
    if row in range(3) and col in range(3) and board[row][col] == "-":
      board[row][col] = player
      break
    else:
      print("Invalid move. Try again.")

def is_game_won():
  # check rows
  for row in board:
    if row == ["X", "X", "X"]:
      return "X"
    elif row == ["O", "O", "O"]:
      return "O"
  # check columns
  for col in range(3):
    if board[0][col] == "X" and board[1][col] == "X" and board[2][col] == "X":
      return "X"
    elif board[0][col] == "O" and board[1][col] == "O" and board[2][col] == "O":
      return "O"
  # check diagonals
  if board[0][0] == "X" and board[1][1] == "X" and board[2][2] == "X":
    return "X"
  if board[0][2] == "X" and board[1][1] == "X" and board[2][0] == "X":
    return "X"
  if board[0][0] == "O" and board[1][1] == "O" and board[2][2] == "O":
    return "O"
  if board[0][2] == "O" and board[1][1] == "O" and board[2][0] == "O":
    return "O"
  return None

def game_loop():
  draw_board()
  while True:
    for player in ["X", "O"]:
      take_turn(player)
      draw_board()
      winner = is_game_won()
      if winner:
        print(f"{winner} won!")
        return

game_loop()
