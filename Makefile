CXX = c++

PROG = assignments chars enums inheritance integer-double loops oop

all: $(PROG)
$(PROG): mento.h

clean:
	rm -f $(PROG) *.o

.SUFFIXES: .cpp
.cpp:
	$(CXX) $(CXXFLAGS) $(CPPFLAGS) $(LDFLAGS) -o $@ $< $(LDLIBS)
