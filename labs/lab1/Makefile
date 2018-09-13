# 

include ../../make.def

EXES=hello$(EXE) hello_omp$(EXE) 

all: $(EXES)

hello$(EXE): hello.$(OBJ) 
	$(CLINKER) $(OPTFLAGS) -o hello hello.$(OBJ) $(LIBS)

hello_omp$(EXE): hello_omp.$(OBJ) 
	$(CLINKER) $(OMPFLAG) $(OPTFLAGS) -o hello_omp hello_omp.$(OBJ) $(LIBS)

run: $(EXES)
	$(PRE)hello$(EXE) 
	$(PRE)hello_omp$(EXE) 

clean:
	$(RM) $(EXES) *.$(OBJ)

.SUFFIXES:
.SUFFIXES: .c .cpp .$(OBJ)

.c.$(OBJ):
	$(CC) $(CFLAGS) -c $<

.cpp.$(OBJ):
	$(CC) $(CFLAGS) -c $<
