number_grid = [
    [1, 2, 3],
    [4, 5, 6],
    [7, 8, 9],
    [0]
]
print(number_grid[2][0])
print(number_grid[0][0])
print()

for row in number_grid:
    print(row)
print()

for r in number_grid:
    for c in r:
        print(c)
