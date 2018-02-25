import hashlib

str = raw_input()
print hashlib.sha512(str).hexdigest()
