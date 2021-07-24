import string


def check(txt,alphabet=string.ascii_lowercase):
    alphaset=set(alphabet)
    # print(alphaset)


    txt=set(txt)


    if txt == alphaset:
        return True



a="The quick brown fox jumps over the lazy dog"

b=a.lower()
b=b.replace(' ','')
print(check(b))
