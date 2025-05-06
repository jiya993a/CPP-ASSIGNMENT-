//
# Writing to a file
fh = FileHandler("test_file.txt", "w")
fh.write("Hello, this is a test.")
del fh  # Destructor is explicitly called here

# Reading from the file
fh2 = FileHandler("test_file.txt", "r")
print(fh2.read())
del fh2
