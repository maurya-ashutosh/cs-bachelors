from operator import add,sub

def addsub(m,k,o):
    lgt = len(k)
    newm = m[:lgt]
    if o == 1:
        tc = list(map(add, newm, k))
    elif o == 2:
        tc = list(map(sub, newm, k)) 
    cl = tc+m[lgt:]
    cl = [x%26 for x in cl]
    return(cl)

def getord(string):
    temp = [(ord(i))%96 for i in string]
    return(temp)

def getchar(li):
    temp = ""
    for i in range(len(li)):
        temp += chr(li[i]+96)
    return(temp)

def encdec(mes,ky,o):
    ordm = getord(mes) 
    ordk = getord(ky)
    ordc = addsub(ordm, ordk,o)
    cd = getchar(ordc)
    return(cd)
    
message = "hello"
key = "hello"


code = encdec(message,key,1)
print(code)
mess = encdec(code,key,2)
print(mess)
