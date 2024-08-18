
#compiler 
CXX = g++ 

#flags
CXX_FLAGS = -std=c++17 -Wall 

#library
LDFLAGS = -lgtest -lgtest_main -lpthread

#sources 
SRCS = test.cpp 

#objects
objs = test.o

#target 
TARGET = test

all:$(TARGET)

$(TARGET):$(OBJS)
	$(CXX) $(CXX_FLAGS) -o $(TARGET) $(SRCS) $(LDFLAGS)


clean:
	rm -f $(TARGET) $(OBJS)