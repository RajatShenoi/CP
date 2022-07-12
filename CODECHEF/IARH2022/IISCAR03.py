from itertools import permutations
import math

T = int(input())

for _ in range(T):
    s = input()

    count = {}

    for l in s:
        try:
            count[l] += 1
        except KeyError:
            count[l] = 1

    ans = 1
    for k in count:
        ans *= math.factorial(count[k])

    print(ans)