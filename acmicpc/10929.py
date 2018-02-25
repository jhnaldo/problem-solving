import hashlib

str = raw_input()
print hashlib.sha224(str).hexdigest()
