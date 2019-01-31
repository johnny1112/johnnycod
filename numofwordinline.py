fname = input("Enter line: ")
numwords = 0
with open(fname, 'r') as f:
for line in f:
words = line.split()
num_words += len(words)
print("Number of words:")
print(numwords)
