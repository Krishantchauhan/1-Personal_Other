



def palindrome(s):
    #remove space
    s=s.replace(' ','')

    a=s[::-1]
    if s == a:
        return True
    else:
        return False



print(palindrome('helleh'))
print(palindrome('helle       h'))
