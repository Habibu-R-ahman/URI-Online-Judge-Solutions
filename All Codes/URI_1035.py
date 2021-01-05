a = [int(x) for x in input().split()]
# a[0] = a
# a[1] = b
# a[2] = c
# a[3] = d

con = True if ((a[0] % 2 == 0) and 
               (a[2] > 0) and (a[3] > 0) and 
               ((a[2] + a[3]) > (a[0] + a[1])) and
               (a[3] > a[0]) and
               (a[1] > a[2])) else False

if con:
    print("Valores aceitos")
else:
    print("Valores nao aceitos")