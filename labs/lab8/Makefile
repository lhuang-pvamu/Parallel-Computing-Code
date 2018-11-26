# 

include ../../make.def

EXES=matmul_recur$(EXE) matmul_recur_omp$(EXE) 

all: $(EXES)

matmul_recur$(EXE): matmul_recur.$(OBJ) 
	$(CLINKER) $(OMPFLAG) $(OPTFLAGS) -o matmul_recur matmul_recur.$(OBJ) $(LIBS)

matmul_recur_omp$(EXE): matmul_recur_omp.$(OBJ) 
	$(CLINKER) $(OMPFLAG) $(OPTFLAGS) -o matmul_recur_omp matmul_recur_omp.$(OBJ) $(LIBS)

run: $(EXES)
	$(PRE)matmul_recur$(EXE) 
	$(PRE)matmul_recur_omp$(EXE) 

clean:
	$(RM) $(EXES) *.$(OBJ)

.SUFFIXES:
.SUFFIXES: .c .cpp .$(OBJ)

.c.$(OBJ):
	$(CC) $(CFLAGS) -c $<

.cpp.$(OBJ):
	$(CC) $(CFLAGS) -c $<
