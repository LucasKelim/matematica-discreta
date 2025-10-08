v = [1222, 2, 3, 10, 524, 6, 7, 11, 9, 2, 12, 15001]

def fun(v, max, i):
    if (len(v) == i):
        return max
    
    newMax = max
    if (v[i] > max):
        newMax = v[i]
    
    return fun(v, newMax, i + 1)
    
print(fun(v, v[0], 0))