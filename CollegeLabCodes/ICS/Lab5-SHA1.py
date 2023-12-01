from hashlib import sha256
import os

file_location = os.path.join(os.path.dirname(__file__), "tony.jpg") 
# Read image file

print("Hash of the file is: ")
# Convert to byte array
with open(file_location, "rb") as image_file:
    f = image_file.read()
    b = bytearray(f)

# Print the result
print(sha256(b).hexdigest())

print("Modified the File, added hidden data to it.")
print("Hash of the file now is: ")

# run this command to modify the file

file_location = os.path.join(os.path.dirname(__file__), "tony_changed.jpg")
# Read image file

# Convert to byte array
with open(file_location, "rb") as image_file:
    f = image_file.read()
    b = bytearray(f)

# Print the result
print(sha256(b).hexdigest())