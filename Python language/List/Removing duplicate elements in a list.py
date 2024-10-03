mylist = ["a", "b", "a", "c", "c"]
mylist = list(dict.fromkeys(mylist))
print(mylist)

n=int(input())
thelist=[]

for i in range(n):
    thelist.append(int(input()))
    
thelist=list(dict.fromkeys(thelist))
thelist.remove(max(thelist))
print(max(thelist))
