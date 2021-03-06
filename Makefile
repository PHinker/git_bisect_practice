SOURCE = testMain.cpp \
         testShape.cpp \
         point.cpp \
         shape3d.cpp \
         sphere.cpp

OBJS = $(SOURCE:.cpp=.o)

TMPOBJS = $(OBJS) testMain.o testClass.o

TEST_OBJS = $(filter-out main.o, $(TMPOBJS))
EST_OBJS = $(filter-out main.o, $(OBJS))

#GNU C/C++ Compiler
GCC = g++

# GNU C/C++ Linker
LINK = g++

# Compiler flags
CFLAGS = -Wall -O3 -std=c++11 -I. 
CXXFLAGS = $(CFLAGS)

# Fill in special libraries needed here
LIBS =

.PHONY: clean

# Targets include all, clean, debug, tar

all : testShape

testShape: $(OBJS)
	$(LINK) -o $@ $^ $(LIBS)

clean:
	rm -rf *.o *.d core testShape

debug: CXXFLAGS = -DDEBUG -g -std=c++11
debug: testShape

tar: clean
	tar zcvf main.tgz $(SOURCE) *.h Makefile

help:
	@echo "	make main  - same as make all"
	@echo "	make all   - builds the main target"
	@echo "	make       - same as make all"
	@echo "	make clean - remove .o .d core main"
	@echo "	make debug - make all with -g and -DDEBUG"
	@echo "	make tar   - make a tarball of .cpp and .h files"
	@echo "	make help  - this message"

-include $(SOURCE:.cpp=.d)

%.d: %.cpp
	@set -e; /bin/rm -rf $@;$(GCC) -MM $< $(CXXFLAGS) > $@

