n = int(input())

dino = []
for i in range(n):
    x = int(input())
    y = int(input())
    dino.append([x, y, i+1])

dino.sort()

for i in range(n-1):
    print(dino[i][2], dino[i+1][2])
