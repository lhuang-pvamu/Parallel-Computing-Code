# 

include ../../make.def

EXES=pi$(EXE) pi_omp$(EXE) 

all: $(EXES)

pi$(EXE): pi.$(OBJ) 
	$(CLINKER) $(OPTFLAGS) -o pi pi.$(OBJ) $(LIBS)

pi_omp$(EXE): pi_omp.$(OBJ) 
	$(CLINKER) $(OMPFLAG) $(OPTFLAGS) -o pi_omp pi_omp.$(OBJ) $(LIBS)

run: $(EXES)
	$(PRE)pi$(EXE) 
	$(PRE)pi_omp$(EXE) 

clean:
	$(RM) $(EXES) *.$(OBJ)

.SUFFIXES:
.SUFFIXES: .c .cpp .$(OBJ)

.c.$(OBJ):
	$(CC) $(CFLAGS) -c $<

.cpp.$(OBJ):
	$(CC) $(CFLAGS) -c $<
