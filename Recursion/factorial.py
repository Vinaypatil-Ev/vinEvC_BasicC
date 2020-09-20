def f(num):
    if(num==0):
        return 1
    return num*f(num-1)

fac = f(100)
print(len(str(fac)))
print("hi")
print(2**100)