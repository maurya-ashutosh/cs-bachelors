from collections import OrderedDict

message = "encryptthis"
key = "thisiskey"
ordm = [ord(i)-97 for i in message]
kl = list(OrderedDict.fromkeys(key))
abcd = [chr(i) for i in range(97,123)]
print(abcd)
for i in abcd:
    if i not in kl:
        kl.append(i)
print(kl)
code = ""
for j in ordm:
    code += kl[j]
print(message)
print(code)

ordc = [ord(i)-97 for i in code]
dec = ""
for j in code:
    dec += abcd[kl.index(j)]
print(dec)        
    
