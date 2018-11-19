# 

include ../../make.def

EXES=linked$(EXE) linked_omp$(EXE) 

all: $(EXES)

linked$(EXE): linked.$(OBJ) 
	$(CLINKER) $(OMPFLAG) $(OPTFLAGS) -o linked linked.$(OBJ) $(LIBS)

linked_omp$(EXE): linked_omp.$(OBJ) 
	$(CLINKER) $(OMPFLAG) $(OPTFLAGS) -o linked_omp linked_omp.$(OBJ) $(LIBS)

run: $(EXES)
	$(PRE)linked$(EXE) 
	$(PRE)linked_omp$(EXE) 

clean:
	$(RM) $(EXES) *.$(OBJ)

.SUFFIXES:
.SUFFIXES: .c .cpp .$(OBJ)

.c.$(OBJ):
	$(CC) $(CFLAGS) -c $<

.cpp.$(OBJ):
	$(CC) $(CFLAGS) -c $<
