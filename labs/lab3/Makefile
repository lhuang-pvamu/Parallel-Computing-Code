# 

include ../../make.def

EXES=loop$(EXE) loop_omp$(EXE) 

all: $(EXES)

loop$(EXE): loop.$(OBJ) 
	$(CLINKER) $(OPTFLAGS) -o loop loop.$(OBJ) $(LIBS)

loop_omp$(EXE): loop_omp.$(OBJ) 
	$(CLINKER) $(OMPFLAG) $(OPTFLAGS) -o loop_omp loop_omp.$(OBJ) $(LIBS)

run: $(EXES)
	$(PRE)loop$(EXE) 
	$(PRE)loop_omp$(EXE) 

clean:
	$(RM) $(EXES) *.$(OBJ)

.SUFFIXES:
.SUFFIXES: .c .cpp .$(OBJ)

.c.$(OBJ):
	$(CC) $(CFLAGS) -c $<

.cpp.$(OBJ):
	$(CC) $(CFLAGS) -c $<
