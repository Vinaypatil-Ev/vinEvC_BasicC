def f(num):
    if(num==0):
        return 1
    return num*f(num-1)

fac = f(100)
print(fac)
print(len(str(fac)))
