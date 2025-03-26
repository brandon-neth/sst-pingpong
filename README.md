# sst-pingpong

This repository contains files implementing a 1 or 2 dimensional ping-pong simulation and the scripts necessary to do scaling evaluation and profiling of the simulation. 
The simulation code was prepared by Andy Stone and the submission/profiling scripts by Brandon Neth.

To study SST’s scalability, we have developed a "ping pong” benchmark. The purpose of this benchmark is to study SST's performance when conducting a simulation that consists of large numbers of simple components.

Specifically, the "Ping Pong Simulation" adds two components to SST:

  - A simulator component whose only purpose is to manage the lifetime of the
    simulation (stop it after a set amount of simulated time has passed). And,
  - A Ponger component, this component connects to (up to) four adjacent ponger
    components to its north, south, west, and east.  When a ponger receives a
    message from its neighbor it will propagate it along.  If the ponger doesn't
    have a neighbor to propagate the message to it will "bounce" it back.

The ponger components can be arranged into a 1-dimensional grid of N components
that connect west-to-east or a 2D grid of NxN components.  The pongers are
preloaded with a set number of "ball" messages.

There are two python scripts that can be used as input configurations for SST.
Both have the same command line arguments.
- `pingpong.py`: A sequential version of the script
- `pingpong_parLoad.py`: A parallel loading version of the script.

To run, invoke SST with one of the two scripts. The scripts take the following parameters (each taking an integer argument):

- `--N` -- Size of the grid (defaults to 10)
- `--timeToRun` -- How long to run the simulation (in seconds; defaults to 200)
- `--numDims` -- Either 1 or 2 to specify dimensionality (defaults to 2)
- `--edgeDelay` -- How long it takes to propogate a message from one ponger to the next in simulated seconds (defaults to 50)
- `--artificialWork` -- When processing a ponger message conduct a meaningless loop that does a multiplication operation on a number for a set number of times. This is useful for studying scalability, where increasing this value can look at the impact of messages taking more or less time to conduct.

Additionally the user must choose exactly one of the following to set the initial placement of balls:
- `--corners` -- place balls in the corners of the 1D or 2D grid.
- `--random` -- randomly place balls in the grid such that no ponger has more than 1 ball
- `--randomOverlap` -- randomly place balls in the grid (where a single component may have more than one ball)
- `--wavefront` -- add balls along the perimeter of the grid (only works on 2d sim)

There is also a `--verbose` that if passed prints debugging information.


# Submission Scripts

This repository also contains scripts necessary to run scaling evaluations of the ping-pong simulation: `omnisubmit.py` and `omnidispatch.sh`.
These scripts are meant to be used on a machine that runs jobs using SLURM. 
In general, you will only need to use the `omnisubmit.py` script, which submits the jobs for whatever scaling evaluation you wish to run. 

TODO: details about how to use omnisubmit.