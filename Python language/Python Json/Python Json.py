import json

with open("Data.json") as f:
    data=json.load(f)

print(data)
print(json.dumps(data,indent=4,sort_keys=True))
print(json.dumps(data,indent=4,sort_keys=False))

person={
    "Name":"Charan",
    "Height":"183",
    "Weight":"62",
}
person_json=json.dumps(person)
print(person_json)

with open('Person.txt','w') as json_file:
    json.dumps(person,json_file)
