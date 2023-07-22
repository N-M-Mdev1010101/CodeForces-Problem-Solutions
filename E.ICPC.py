import sys

s = input().strip()

n = len(s)
passwords = set()

for i in range(n - 2):
    password = s[i:i+3]
    passwords.add(password)

count = len(passwords)
print(count)
