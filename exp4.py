d1 = {1: 10, 2: 20, 3: 30}
d2 = {4: 40, 5: 50}
print("Dictionary 1:", d1)
print("Dictionary 2:", d2)
mor=dict(d1.items() | d2.items())
print("\nMerged using | operator:", mor)
unpack = {**d1, **d2}
print("Merged using unpacking:", unpack)
mergeupdate = d1.copy()
mergeupdate.update(d2)
print("Merged using update():", mergeupdate)
loop = d1.copy()
for k, v in d2.items():
    loop[k] = v
print("Merged using for loop:", loop)
