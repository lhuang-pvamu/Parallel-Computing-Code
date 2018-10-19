# 

include ../../make.def

EXES=prime$(EXE) prime_omp$(EXE) 

all: $(EXES)

prime$(EXE): prime.$(OBJ) 
	$(CLINKER) $(OPTFLAGS) -o prime prime.$(OBJ) $(LIBS)

prime_omp$(EXE): prime_omp.$(OBJ) 
	$(CLINKER) $(OMPFLAG) $(OPTFLAGS) -o prime_omp prime_omp.$(OBJ) $(LIBS)

run: $(EXES)
	$(PRE)prime$(EXE) 
	$(PRE)prime_omp$(EXE) 

clean:
	$(RM) $(EXES) *.$(OBJ)

.SUFFIXES:
.SUFFIXES: .c .cpp .$(OBJ)

.c.$(OBJ):
	$(CC) $(CFLAGS) -c $<

.cpp.$(OBJ):
	$(CC) $(CFLAGS) -c $<
