d = 128

def fun(dec, bin):
    if (dec == 0):
        return [0]
    
    if dec == 1:
        bin.insert(0, 1)
        return bin
    
    b = dec % 2
    bin.insert(0, b)

    return fun(dec // 2, bin)

print(fun(d, []))
