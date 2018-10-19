# 

include ../../make.def

EXES=midterm$(EXE) midterm_omp$(EXE) 

all: $(EXES)

midterm$(EXE): midterm.$(OBJ) 
	$(CLINKER) $(OMPFLAG) $(OPTFLAGS) -o midterm midterm.$(OBJ) $(LIBS)

midterm_omp$(EXE): midterm_omp.$(OBJ) 
	$(CLINKER) $(OMPFLAG) $(OPTFLAGS) -o midterm_omp midterm_omp.$(OBJ) $(LIBS)

run: $(EXES)
	$(PRE)midterm$(EXE) 
	$(PRE)midterm_omp$(EXE) 

clean:
	$(RM) $(EXES) *.$(OBJ)

.SUFFIXES:
.SUFFIXES: .c .cpp .$(OBJ)

.c.$(OBJ):
	$(CC) $(CFLAGS) -c $<

.cpp.$(OBJ):
	$(CC) $(CFLAGS) -c $<
