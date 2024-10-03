def translated(phrase):
    translation=''

    for i in phrase:
        if i in 'AEIOUaeiou':
            translation+='g'

        else:
            translation+=i
    return translation


print(translated(input('Enter a phrase : ')))

print()

def translate(phrase):
    translation=''

    for i in phrase:
        if i.lower() in 'aeiou':
            if i.isupper():
                translation+='G'
            else:
                translation+='g'

        else:
            translation+=i
    return translation


print(translate(input('Enter a phrase : ')))