# sacio.c

**A C library for reading and writing SAC files in your own C programs.**

The library contains two files:

- `sacio.h`: Head file for SAC file format, and prototype for SAC IO functions.
- `sacio.c`: Definitions of several SAC IO functions.

## Functions

The library provides following functions:

- `read_sac_head`: read SAC header only
- `read_sac`: read SAC binary data
- `read_sac_xy`: read SAC binary XY data
- `read_sac_pdw`: read SAC data in a partial data window (cut option)
- `write_sac`: write SAC binary data
- `write_sac_xy`: write SAC binary XY data
- `new_sac_head`: create a minimal SAC header
- `sac_head_index`: return the index of a SAC head field
- `issac`: Check if a file in in SAC format

## Credit

The `sacio.c` library was originally written by Prof. Lupei Zhu, and further
modified and improved by Dongdong Tian.
