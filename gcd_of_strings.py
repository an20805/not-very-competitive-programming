def mod(str1, str2):
    l = len(str2)
    while len(str1) >= l and str1[:l]==str2:
        str1 = str1[l:]

    return str1


def gcdOfStrings(str1, str2):
    if str2=="":
        return str1
    md = mod(str1, str2)
    if len(md) >= len(str2):
        return ""
    return gcdOfStrings(str2, md)

print(gcdOfStrings("ababv", "ab"))
    

