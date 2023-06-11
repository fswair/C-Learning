CXX = c++

PROG = assignments chars enums inheritance integer-double loops oop

all: $(PROG)
mento.o: mento.h
$(PROG): mento.o

clean:
	rm -f $(PROG) *.o

.SUFFIXES: .cpp
.cpp:
	$(CXX) $(CXXFLAGS) $(CPPFLAGS) $(LDFLAGS) -o $@ $^ $(LDLIBS)

.cpp.o:
	$(CXX) $(CXXFLAGS) $(CPPFLAGS) -c $<
