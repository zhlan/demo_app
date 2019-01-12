# ---------------------------------------------------------------------------
#                           Make for demo
# ---------------------------------------------------------------------------

SUB_DIRS = main calc function branches ut_test

ALL_SRCS = $(foreach dir, $(SUB_DIRS), $(wildcard $(dir)/*.c))
$(info $(ALL_SRCS))

ALL_OBJS = $(ALL_SRCS:.c=.o)
$(info $(ALL_OBJS))

INCLUDE := $(foreach dir, $(SUB_DIRS), -I./$(dir))
$(info $(INCLUDE))

CFLAGS = -g
GXX=g++ -std=c++11
GTEST=-lgtest -lpthread
GCOV=-fprofile-arcs -ftest-coverage

#.PHONY: all clean $(SUB_DIRS) 

all: demo_app

demo_app: $(ALL_OBJS)  
	@echo Build demo_prj start...
	$(GXX) $(ALL_OBJS) $(GTEST) $(GCOV) -o $@
	@echo Done!!!

%.o: %.c
	@echo "Compiling $<..."
	$(GXX) $(GTEST) $(INCLUDE) $(CFLAGS) $(GCOV) -c -o $@ $<

clean:
	@rm -rf $(shell find ./ -name "*.o")
	@rm -rf $(shell find ./ -name "*.gc*")
	@rm -rf demo_app 
	@echo Clean demo_prj over... 

$(info makefile end)
