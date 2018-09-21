#!/usr/bin/env python3

import decimal
import random

def pi_sim():
    decimal.getcontext().prec = 6
    sum = 0
    iter = 1000000
    for i in range(iter):
        x = decimal.Decimal(random.random())
        y = decimal.Decimal(random.random())
        u_square = decimal.Decimal(1.0)

        if (x ** 2 + y ** 2) < 1.0:
            sum += 1
        
    return (sum / iter) * 4


def main():
    import timeit
    t_delta = timeit.timeit('pi_sim()', number=10, setup="from __main__ import pi_sim")
    print("Time Consume: {0}".format(t_delta))


if __name__ == '__main__':
    main()