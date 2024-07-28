def extd_euclid(a, b,):
    if b==0:
        x = 1
        y = 0 #can be anything
        return a, x, y
    
    g, x0, y0 = extd_euclid(b, a%b)

    x , y = y0, x0 - (a//b)*y0
    return g, x, y

def solve():
    a, b, c = map(int, input().split())
    x, y = 0, 0

    if a>b:
        g, x, y = extd_euclid(a, b)
    else:
        g, y, x = extd_euclid(b, a)

    if c%g==0:
        x0 , y0 = c//g*x , c//g*y
        k = int(-1*x0/b*g)
        count = 0
        x = x0 + b/g*k
        if x==0:
            k+=1
            x , y = x0 + b/g*k, y0 - a/g*k
        y = y0 - a/g*k
        x_sol, y_sol = [], []

        while(y>0):
            count+=1
            k+=1
            x_sol.append(int(x))
            y_sol.append(int(y))
            x , y = x0 + b/g*k, y0 - a/g*k

        print(count)
        for i in range(count):
            print(x_sol[i], y_sol[i])

    else:
        print(0)

t = 1
# t = int(input())
while(t):
    solve()
    t-=1
