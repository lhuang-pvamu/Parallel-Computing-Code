# 

include ../../make.def

EXES=fib$(EXE) fib_omp$(EXE) 

all: $(EXES)

fib$(EXE): fib.$(OBJ) 
	$(CLINKER) $(OPTFLAGS) -o fib fib.$(OBJ) $(LIBS)

fib_omp$(EXE): fib_omp.$(OBJ) 
	$(CLINKER) $(OMPFLAG) $(OPTFLAGS) -o fib_omp fib_omp.$(OBJ) $(LIBS)

run: $(EXES)
	$(PRE)fib$(EXE) 
	$(PRE)fib_omp$(EXE) 

clean:
	$(RM) $(EXES) *.$(OBJ)

.SUFFIXES:
.SUFFIXES: .c .cpp .$(OBJ)

.c.$(OBJ):
	$(CC) $(CFLAGS) -c $<

.cpp.$(OBJ):
	$(CC) $(CFLAGS) -c $<
