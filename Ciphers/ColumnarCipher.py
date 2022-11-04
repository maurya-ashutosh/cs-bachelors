text = 'hello this is the message'
key = 5
textws = text.replace(' ','')
code = ''
print(textws)
for j in range(5):
    print(j)
    for i in range(j,len(textws),key):
        code += textws[i]
print(code)
