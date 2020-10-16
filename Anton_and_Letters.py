Ibrhaim's script
import re
inp = input('')
for st in inp:
    li = re.findall('[a-z]+', inp)
s = set(li)
print(len(s))