Complete the table below with your results, and then provide your interpretation at the end.

Note that:

- When calculating the parallel speed-up S, use the time output by the code, which corresponds
  to the parallel calculation and does not include initialising the matrix/vectors or
  performing the serial check.

- Take as the serial execution time the time output by the code when run with a single process
  (hence the speed-up for 1 process should be 1.0).


No. Process:                        Mean time (average of 3 runs)           Parallel speed-up, S:
===========                         ============================:           ====================
1                                   0.346024                                N/A
2                                   0.297656                                1.16250
3                                   0.275848                                1.25440
4                                   0.259353                                1.33418

Architecture that the timing runs were performed on:
University system: feng-linux -
Intel® Xeon(R) CPU E5-2630 v3 @ 2.40GHz × 32
125.7 GiB

A brief interpretation of these results (2-3 sentences should be enough):

An N of 12,000 was chosen as it is divisible by 1 to 4 and because I felt it gave enough definition to the timings.
There is a negative correlation between the number of cores utilised and the computation time for the program and 
parallel speedup is positively correlated with the number of processes used. The relationship between processes 
and speedup is not 1:1 due to parallel overheads.
