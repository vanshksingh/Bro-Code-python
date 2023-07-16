name = "bro code"
# [start:stop:stop]
first_name = name[0:3]
last_name = name[4:8]
funky_name = name[0:8:3]
reversed_name = name[::-1]

print(first_name)
print(last_name)
print(funky_name)
print(reversed_name)

website = "http://google.com" #change website name to see

slice = slice(7,-4)

print(website[slice])
