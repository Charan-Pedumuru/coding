# Python program to find second largest number in a list
# list of numbers - length of list should be at least 2

x=int(input())
list1=list(map(int,input().strip().split()))

mx = max(list1[0], list1[1])
secondmax = min(list1[0], list1[1])
n = len(list1)
for i in range(2,n):
	if list1[i] > mx:
		secondmax = mx
		mx = list1[i]
	elif list1[i] > secondmax and mx != list1[i]:
		secondmax = list1[i]
	elif mx == secondmax and secondmax != list1[i]:
		secondmax = list1[i]

print("Second highest number is : ",str(secondmax))
