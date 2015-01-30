include Makefile.arch

#
# stuff to make
#
SOURCES=$(wildcard *.cc) $(wildcard MT2/*.cc)
OBJECTS=$(SOURCES:.cc=.o)
#LIB=libCMS3NtupleMacrosCORE.so
LIB=CMS3_CORE.so

#
# how to make it
#

$(LIB): $(OBJECTS) 
	$(LD) $(LDFLAGS) $(SOFLAGS) $(OBJECTS) $(ROOTLIBS) -o $@

%.o:	%.cc
	$(CXX) $(CXXFLAGS) -c $< -o $@

#
# target to build
# likelihood id library
#

all: $(LIB) 
clean:
	rm -f *.o \ 
	rm -f *.d \
	rm -f *.so \
	rm -f MT2/*.o \ 
	rm -f MT2/*.d \
	rm -f MT2/*.so
