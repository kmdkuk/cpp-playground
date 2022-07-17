#!/usr/bin/env python3
import random
N = 200000
K = random.randint(1, N);
print(N, K)

lst = []
for i in range(1,N+1):
    lst.append(i)
random.shuffle(lst)
for l in lst:
    print(l)

