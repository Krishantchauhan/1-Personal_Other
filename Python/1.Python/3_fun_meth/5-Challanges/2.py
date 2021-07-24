def check(text):
    wordList=text.split()
    print(wordList)

    first=wordList[0]
    second=wordList[1]

    return first[0]==second[0]



a=check('Krishant Krish')

print(a)
