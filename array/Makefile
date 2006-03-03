#
#	Makefile for array and vector tools
#
CFLAGS = -O2
LDLIBS = -lm
EXEDIR = .

EXE = absarr addarr grparr magvec matarr maxarr meanarr minarr \
	rmsarr subarr gtarr multarr sumarr

all:$(EXE)

$(EXE):
	$(CC) $(CFLAGS) -o $(EXEDIR)/$@ $@.c $(LDLIBS)


magvec: magvec.c
subarr: subarr.c
