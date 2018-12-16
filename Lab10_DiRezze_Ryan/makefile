
CXX = g++
CXXFLAGS = -std=c++0x
#CXXFLAGS += -Wall
#CXXFLAGS += -pedantic-errors
#CXXFLAGS += -g
#CXXFLAGS += -O3
#LDFLAGS = -lboost_date_time

OBJS = main.o FibonacciR.o FibonacciNR.o

SRCS = main.cpp FibonacciR.cpp FibonacciNR.cpp

HEADERS = FibonacciR.hpp FibonacciNR.hpp

#target: dependencies
#	rule to build
#

analysis: ${SRCS} ${HEADERS}	
	${CXX} ${CXXFLAGS} ${SRCS} -o analysis

#${OBJS}: ${SRCS}
#	${CXX} ${CXXFLAGS} -c $(@:.o=.cpp)
