def mutate_string(string, position, character):
    l=list(string)
    l[position]=character
    string=''.join(l)
    return string

if __name__ == '__main__':
    s = input()
    i, c = input().split()
    s_new = mutate_string(s, int(i), c)
    print(s_new)


strin = "Join our community of top freelancers"
  
# replace "top" with "top 1%"
print(strin.replace("top", "top 1%"))
 
# printing the original string
print(strin)