#!/bin/sh
# gasoline density.param
charmrun +p 16 gasoline density.param
#
# difference with the standard
# 
echo EXPECT about 0.0002 on the second line
arrdiff pkdden.den bench.den | arrmax
