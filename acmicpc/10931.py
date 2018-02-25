import hashlib

str = raw_input()
print hashlib.sha384(str).hexdigest()
