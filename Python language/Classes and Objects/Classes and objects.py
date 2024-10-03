class employee:
    
    def __init__(self,name,age,job, salary):
        self.name=name
        self.age=age
        self.job=job
        self.salary=salary

employee1=employee('Jim',24,'Software engineer',120000)
employee2=employee('Bella',22,'Developer',200000)

print(employee1.name)
print(employee2.job)


class billionaires:
    def __init__(self,name,age,company,networth):
        self.name=name
        self.age=age
        self.company=company
        self.networth=networth


b1=billionaires
