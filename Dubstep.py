import re
st = input('')
sr = st.replace('WUB', ' ').strip()
print(re.sub(' +',' ',sr))