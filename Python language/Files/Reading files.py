'''
open('File.txt','r')   #To read
open('File.txt','w')   #To write
open('File.txt','a')   #To append to add new information at the end of the file
open('File.txt','r+w') #To read and write

'''

games_file=open("File1.txt","r")

print(games_file.readable())   # If the mode is "w" then it will show false
print(games_file.read())
print(games_file.readline())   # prints the first line
print(games_file.readline())   # prints the second line
print(games_file.readlines())  # prints the text in the form of a list
#print(games_file.readlines()[0])

print()

for e in games_file.readlines():
    print(e)


games_file.close()

