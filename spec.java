import string
import collections as ct
specialchars = string.punctuation
sum(v for k, v in ct.Counter(text).items() if k in specialchars)
