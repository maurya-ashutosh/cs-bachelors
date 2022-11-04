def show(l):
    for i in range(len(l)):
        for j in range(len(l[0])):
            print(l[i][j], end = " ")
        print("\n")

message = "encrpytitrightnow"
key = 5
keyd = 2*(key-1)
length = len(message)
rr = [["" for i in range(length)] for j in range(key)] 

for i in range(len(rr)):
    for j in range(len(rr[0])):
        temp1 = j%keyd
        if i==temp1:
            rr[i][j] = message[j]
        elif j>i and (i+j)%(keyd)==0:
            rr[i][j] = message[j]
        
show(rr)

ctext = ""
for i in range(len(rr)):
    for j in range(len(rr[0])):
        if type(rr[i][j])== type('a'):
            ctext += rr[i][j]

print(ctext)

rrn = [[0 for i in range(length)] for j in range(key)] 

x = 0
for i in range(len(rrn)):
    for j in range(len(rrn[0])):
        temp1 = j%keyd
        if x<length:
            if i==temp1:
                rrn[i][j] = ctext[x]
                x+=1
            elif j>i and (i+j)%(keyd)==0:
                rrn[i][j] = ctext[x]
                x+=1

dtext = ""
for i in range(len(rrn[0])):
    for j in range(len(rrn)):
        if type(rrn[j][i])== type('a'):
            dtext += rr[j][i] 

print(dtext)
