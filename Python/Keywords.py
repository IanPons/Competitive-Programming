n = int(input())
x = []

for i in range(n):
    x.append(str(input()).lower().replace('-', ' '))

print(len(set(x)))

