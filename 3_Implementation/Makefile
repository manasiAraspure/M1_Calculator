# #for  Unity testing
# Build:
# 	gcc  src/addition.c src/subtraction.c src/division.c src/multiplication.c src/modulous.c src/factorial.c src/fibonacciSeries.c src/square.c src/squareRoot.c src/cube.c src/cubeRoot.c test/testUnity.c unity/unity.c -lm -Iunity

# Run:
# 	./a.out


# PROJ_NAME = main
# TEST_PROJ_NAME = Test_$(PROJ_NAME)

# SRC = test\
# src/addition.c\
# src/subtraction.c\
# src/division.c\
# src/modulous.c\
# src/multiplication.c\
# src/factorial.c\
# src/fibonacciSeries.c\
# src/square.c\
# src/squareRoot.c\
# src/cube.c\
# src/cubeRoot.c\



# INC_H = inc
# INC_T = unity

# ifdef OS
#    RM = del 
#    FixPath = $(subst /,\,$1)
#    EXEC = exe
# else
#    ifeq ($(shell uname), Linux)
#       RM = rm -rf
#       FixPath = $1
# 	  EXEC = out
#    endif
# endif


# all:
# 	gcc -I $(INC_H) $(SRC) main.c -o -lm $(call FixPath,$(PROJ_NAME).$(EXEC))
	
# run:
# 	$(call FixPath,$(PROJ_NAME).$(EXEC))
# test:
# 	gcc -I $(INC_H) -I $(INC_T) $(TEST_SRC) $(SRC) -o $(call FixPath,$(TEST_PROJ_NAME).$(EXEC))
# 	./$(call FixPath,$(TEST_PROJ_NAME).$(EXEC))

# clean:
	
# 	$(RM) *.$(EXEC)


PROJ_NAME = main
SRC = main.c\
src/addition.c\
src/subtraction.c\
src/division.c\
src/modulous.c\
src/multiplication.c\
src/factorial.c\
src/fibonacciSeries.c\
src/square.c\
src/squareRoot.c\
src/cube.c\
src/cubeRoot.c\


TEST_SRC =src/addition.c\
src/subtraction.c\
src/division.c\
src/modulous.c\
src/multiplication.c\
src/factorial.c\
src/fibonacciSeries.c\
src/square.c\
src/squareRoot.c\
src/cube.c\
src/cubeRoot.c\
src/../test/testUnity.c\
unity/unity.c 
  
#To check if the OS is windows or linux and set the executable file extension and delete command accordingly
ifdef OS
   RM = del /q
   FixPath = $(subst /,\,$1)
   EXEC = exe
else
   ifeq ($(shell uname), Linux)
      RM = rm -rf
      FixPath = $1
	  EXEC = out
   endif
endif
TEST_OUTPUT = $(BUILD)/Test_$(PROJECT_NAME).$(EXEC)
INC	= -Iinc\
-Iunity

all: $(SRC) $(BUILD)
	gcc $(SRC) $(INC) -o $(call FixPath,$(PROJ_NAME).$(EXEC)) -lm


run: all
	./$(call FixPath,$(PROJ_NAME).$(EXEC))

# Build and run of Unit test

build_test:
	gcc $(TEST_SRC) $(INC) $(INCLUDE_LIBS) -o $(call FixPath,$(PROJ_NAME).$(EXEC)) -lm

run_test: build_test
	./$(call FixPath,$(PROJ_NAME).$(EXEC)) 

analyze: test memcheck staticcheck coverage sanitize_check

staticcheck:
	cppcheck --enable=all -iunity .

# memcheck:
# 	valgrind ./$(TEST_OUTPUT)

# sanitize_check:
# 	gcc -fsanitize=address -fno-omit-frame-pointer $(TEST_SRC) $(INC) -o $(TEST_OUTPUT) 
# 	./$(TEST_OUTPUT)

# clean:
# 	$(RM) $(call FixPath,$(PROJ_NAME).$(EXEC))