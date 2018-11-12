# 

include ../../make.def

EXES=pi_recur$(EXE) pi_recur_omp$(EXE) 

all: $(EXES)

pi_recur$(EXE): pi_recur.$(OBJ) 
	$(CLINKER) $(OMPFLAG) $(OPTFLAGS) -o pi_recur pi_recur.$(OBJ) $(LIBS)

pi_recur_omp$(EXE): pi_recur_omp.$(OBJ) 
	$(CLINKER) $(OMPFLAG) $(OPTFLAGS) -o pi_recur_omp pi_recur_omp.$(OBJ) $(LIBS)

run: $(EXES)
	$(PRE)pi_recur$(EXE) 
	$(PRE)pi_recur_omp$(EXE) 

clean:
	$(RM) $(EXES) *.$(OBJ)

.SUFFIXES:
.SUFFIXES: .c .cpp .$(OBJ)

.c.$(OBJ):
	$(CC) $(CFLAGS) -c $<

.cpp.$(OBJ):
	$(CC) $(CFLAGS) -c $<
