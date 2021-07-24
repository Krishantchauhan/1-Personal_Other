def count():
    a='Hello Mr. Rogers, how are you this fine Tuesday?'
    Capital=0
    small=0

    for i in a:
        if i.isupper():
            Capital+=1
        elif i.islower():
            small+=1
            
    print(f'No. of Upper case characters : {Capital}')
    print(f'No. of Lower case characters : {small}')




count()
