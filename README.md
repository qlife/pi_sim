# Pi Simulator

Simple benchmark of Pi simulation.

## Description

Consider a card coordinate system - we have a square surrounded by original to (1,1).
Then we draw a arc from (1,0) to (0,1), using (0,0) as center respectively.

The area under the arc is `pi/4`.

Now we may choose points with in the square randomly. The points could be written as (X, Y) where X and Y are random variable ranged in [0, 1). If `X*X + Y*Y` smaller than one, then the points should failed under the arc.

This is how we estimate the value of pi with Monte Carlo algorithm.

## Result

I'm do it at a MBP 13" 2017 model. Processor is Intel Core i5, 2.3 GHz.

| Envorinment  | Number of Random Points | Times of Simulation  | Time in seconds |
|---|---|---|---|
|Python 3 plain math  | 1000000  | 10  | 3.606 |
|Python 3 - decimal  | 1000000  | 10  | 35.037 |
|C   | 1000000  | 10  | 0.11 |
|Java| 1000000 | 10 | 0.396 |