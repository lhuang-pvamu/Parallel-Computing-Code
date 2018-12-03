# 

include ../../make.def

EXES=final$(EXE) final_omp$(EXE) 

LIBOPENCV=-Wall -Wextra -lopencv_core -lopencv_highgui -lopencv_imgproc -lopencv_imgcodecs -lm

all: $(EXES)

final$(EXE): final.$(OBJ) 
	$(CLINKER) $(OMPFLAG) $(OPTFLAGS) -o final final.$(OBJ) $(LIBS) $(LIBOPENCV)

final_omp$(EXE): final_omp.$(OBJ) 
	$(CLINKER) $(OMPFLAG) $(OPTFLAGS) -o final_omp final_omp.$(OBJ) $(LIBS)

run: $(EXES)
	$(PRE)final$(EXE) 
	$(PRE)final_omp$(EXE) 

clean:
	$(RM) $(EXES) *.$(OBJ)

.SUFFIXES:
.SUFFIXES: .c .cpp .$(OBJ)

.c.$(OBJ):
	$(CC) $(CFLAGS) -c $<

.cpp.$(OBJ):
	$(CC) $(CFLAGS) -c $<
