import cppbindings

print(f"binded module: {cppbindings}")
print(f"binded function: {cppbindings.add}")
print(f"9999999999999999 + 9999999999999999 = {cppbindings.add(9999999999999999,  9999999999999999)}")