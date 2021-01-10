n = int(input())
count = 0
for x in range(n):
    x = int(input())
    count += x >= 10 and x <= 20
print(f"{count} in\n{n - count} out")