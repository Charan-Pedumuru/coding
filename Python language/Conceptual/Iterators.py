#1
tuple=("Car","Bike","Train")
myit=iter(tuple)
print(next(myit))
print(next(myit))
print(next(myit))

#2
tuple1=('Apple')
myit1=iter(tuple1)
print(next(myit1))
print(next(myit1))
print(next(myit1))

#3
class my_numbers:
    def __iter__(self):
        self.a=1
        return self
    def __next__(self):
        x=self.a
        self.a+=1
        return x
myclass=my_numbers()
myiter=iter(myclass)
print(next(myiter))
print(next(myiter))
print(next(myiter))