#!/bin/python3

import math
import os
import random
import re
import sys

#
# Complete the 'truckTour' function below.
#
# The function is expected to return an INTEGER.
# The function accepts 2D_INTEGER_ARRAY petrolpumps as parameter.
#

def truckTour(petrolpumps):
    for i,p in enumerate(petrolpumps):
        try:
            gas = 0
            pump = i
            while pump != i-1:
                gas += (petrolpumps[pump][0] - petrolpumps[pump][1])
                if (gas < 0):
                    raise Exception()
                pump = (pump + 1) % len(petrolpumps)
            return i
        except Exception as e:
            continue



if __name__ == '__main__':
    n = int(input().strip())

    petrolpumps = []

    for _ in range(n):
        petrolpumps.append(list(map(int, input().rstrip().split())))

    result = truckTour(petrolpumps)

    # remove fptr stuff for local testing
    print(result)
