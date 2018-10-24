# 

include ../../make.def

EXES=mandel$(EXE) mandel_omp$(EXE) 

all: $(EXES)

mandel$(EXE): mandel.$(OBJ) 
	$(CLINKER) $(OPTFLAGS) -o mandel mandel.$(OBJ) $(LIBS)

mandel_omp$(EXE): mandel_omp.$(OBJ) 
	$(CLINKER) $(OMPFLAG) $(OPTFLAGS) -o mandel_omp mandel_omp.$(OBJ) $(LIBS)

run: $(EXES)
	$(PRE)mandel$(EXE) 
	$(PRE)mandel_omp$(EXE) 

clean:
	$(RM) $(EXES) *.$(OBJ)

.SUFFIXES:
.SUFFIXES: .c .cpp .$(OBJ)

.c.$(OBJ):
	$(CC) $(CFLAGS) -c $<

.cpp.$(OBJ):
	$(CC) $(CFLAGS) -c $<
