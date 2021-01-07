a = [int(x) for x in input().split()]
time = None

# a[0] initial hour
# a[1] initial min
# a[2] final hour
# a[3] final min
start = 60 * a[0] + a[1]
finish = 60 * a[2] + a[3]

if finish <= start:
    finish += 1440     # 24 * 60
time = finish - start

print(f"O JOGO DUROU {int(time / 60)} HORA(S) E {int(time % 60)} MINUTO(S)")
