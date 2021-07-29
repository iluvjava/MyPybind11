import cppbindings

print(f"binded module: {cppbindings}")
print(f"binded function: {cppbindings.add}")
print(f"9999999999999999 + 9999999999999999 = {cppbindings.add(9999999999999999,  9999999999999999)}")
print(f"3 + 2 = {cppbindings.add(3, 2)}")
print(f"3.0 + 2.5 = {cppbindings.add(3.0, 2.5)} ")
print(f"Checking Mixed Big Integers and floats.")
print(f"99999999999999999999999 + 1.1 = {cppbindings.add(99999999999999999999999,1.1)} ")