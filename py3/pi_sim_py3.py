#!/usr/bin/env python3

import random

def pi_sim():
    sum = 0
    iter = 1000000
    for i in range(iter):
        x = random.random()
        y = random.random()

        if (x ** 2 + y ** 2) < 1.0:
            sum += 1
        
    return (sum / iter) * 4


def main():
    import timeit
    t_delta = timeit.timeit('pi_sim()', number=10, setup="from __main__ import pi_sim")
    print("Time Consume: {0}".format(t_delta))


if __name__ == '__main__':
    main()