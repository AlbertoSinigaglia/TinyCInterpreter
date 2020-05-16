CXX=g++
ANTLR_INCLUDE=/usr/include/antlr4-runtime
CXXFLAGS=-std=c++11 -Wno-attributes -I "$(ANTLR_INCLUDE)"
LDFLAGS=-lantlr4-runtime 
TCDEPS=runtimeVisitor.h
DEPS=tinycLexer.cpp tinycParser.cpp
OBJS=tinycParser.o tinycLexer.o
SCOBJS=syncheck.o
TCOBJS=tinyc.o runtimeVisitor.o
ANTLRS=tinycBaseListener.h \
        tinycLexer.cpp \
        tinycLexer.tokens \
        tinycParser.cpp \
        tinycLexer.h \
        tinycParser.h \
        tinycBaseVisitor.h \
        tinycBaseVisitor.cpp \
        tinycVisitor.h \
        tinycVisitor.cpp \
        tinyc.interp \
        tinycLexer.interp \
        tinyc.tokens

all: syncheck tinyc

syncheck: $(SCOBJS) $(OBJS) $(DEPS)
	$(CXX) -o syncheck $(SCOBJS) $(OBJS) $(LDFLAGS)

tinyc: $(TCOBJS) $(OBJS) $(DEPS) $(TCDEPS)
	$(CXX) -o tinyc $(TCOBJS) $(OBJS) $(LDFLAGS)

%.o: %.cpp $(DEPS) $(TCDEPS)
	$(CXX) -c -o $@ $< $(CXXFLAGS)

#$(DEPS): tinyc.g4
#	antlr4 -Dlanguage=Cpp -no-listener -visitor tinyc.g4

clean:
	rm -f $(OBJS) $(TCOBJS) $(SCOBJS) syncheck tinyc $(ANTLRS)

