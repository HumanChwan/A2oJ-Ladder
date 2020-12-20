k = (input()).split(" ")
a = int(k[0])
b = int(k[1])
go = 0
ans = 0
while True:
    ans += a
    go += a
    a = int(go/b)
    go = go % b
    if a == 0:
        break
print(ans)
