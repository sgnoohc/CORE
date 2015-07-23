include Makefile.arch

#
# stuff to make
#
SOURCES=$(wildcard *.cc) $(wildcard Tools/*.cc) $(wildcard Tools/MT2/*.cc)
OBJECTS=$(SOURCES:.cc=.o)
LIB=CMS3_CORE.so

#
# how to make it 
#

$(LIB): $(OBJECTS) 
	$(LD) $(LDFLAGS) $(SOFLAGS) $(OBJECTS) $(ROOTLIBS) -lTMVA -lXMLIO -lMLP -lTreePlayer -o $@

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
	rm -f *.so
