utnesils ={"fork","spoon","knife"}
dishes = {"bowl","plate","cup","knife"}


utnesils.add("napkin")
utnesils.remove("fork")
#utensil.clear()

dinner = utnesils.union(dishes)
for x in dinner :
    print(x)

print(utnesils.difference(dishes))
print(utnesils.intersection(dishes))
