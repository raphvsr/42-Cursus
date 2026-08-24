*This project has been created as part of the 42 curriculum by rvasseur.*


## Description
This projet is about basics of threading a process.
We learn how to create threads and manage them. this is a common problem
in programmation and forks represent the thread.



## Instructions

### Compilation
Compile the program using the provided Makefile using make

### Execution

./philo <number_of_philosophers> <time_to_die> <time_to_eat> <time_to_sleep> [number_of_times_each_philosopher_must_eat]

```bash

# 1 philosopher should die around 800ms
./philo 1 800 200 200

# 5 philosophers: no one should die
./philo 5 800 200 200

# 4 philosophers: stops cleanly after each philosopher eats 5 times
./philo 4 410 200 200 5

# 4 philosophers: one philosopher dies around 310ms
./philo 4 310 200 100
```

## Resources

to understand the problem globally :
https://medium.com/@kaustubh.saha/dining-philosophers-problem-2b7370bd0f3e
pthread/muted
https://www.geeksforgeeks.org/c/thread-functions-in-c-c/
thread and concurrency / data race
https://www.codequoi.com/en/threads-mutexes-and-concurrent-programming-in-c/
### AI Usage
I used ai for debugging some part and code review to get best practice
only after i did my own way. I also used it to make multiple test with excepted results.
