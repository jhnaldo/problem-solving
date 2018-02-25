import hashlib

str = raw_input()
print hashlib.sha256(str).hexdigest()
