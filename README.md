# Flye
# Language: C++
# Input: TXT
# Output: DIR
# Tested with: PluMA 1.1, GCC 4.8.4
# Dependencies: Flye 2.8.3-b1725

PluMA plugin to perform genome assembly with long reads, using Flye (Kolmogorov et al, 2019).

The plugin accepts as input a TXT file of parameters, one per line:
type of data (i.e. nano-raw)
input FASTQ file
genome size

Assembly will be sent to the output directory specified by the user.

Note: The example provided in here will not provide adequate coverage; it is challenging to find one under the 100MB limit that does, but a complete working example is available upon request.
