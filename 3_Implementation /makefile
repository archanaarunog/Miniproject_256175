PROJ_NAME = Routh_hurwitz

BUILD_DIR = Build

SRC= src/function.c

INC= -Iinc

INCT= Unity

TEST_SRC = src/function.c\
test/test_routh_hurwitz.c\
Unity/unity.c\

TEST_OUTPUT = $(BUILD_DIR)/Test_$(PROJ_NAME).out

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

.PHONY : all test coverage run clean doc

all:$(BUILD-DIR)
	gcc main.c $(SRC) $(INC) -o $(call FixPath,$(BUILD_DIR)/$(PROJ_NAME).$(EXEC))

run: all
	$(call FixPath,$(BUILD_DIR)/$(PROJ_NAME).$(EXEC))

test: $(SRC) $(TEST_SRC)
	gcc $^ $(INC) -o $(call FixPath,$(BUILD_DIR)/$(TEST_PROJ_NAME).$(EXEC))
	$(call FixPath,$(BUILD_DIR)/$(TEST_PROJ_NAME).$(EXEC))

doc:
	make -C doc
$(BUILD_DIR):
	mkdir $(BUILD_DIR)

coverage:${PROJ_NAME}
	gcc -fprofile-arcs -ftest-coverage $(SRC) $(INC) -o $(call FixPath,$(BUILD_DIR)/$(TEST_PROJ_NAME).$(EXEC))
	$(call FixPath,$(BUILD_DIR)/$(TEST_PROJ_NAME).$(EXEC))
	gcov -a $(SRC)

valgrind:
	valgrind $(call FixPath,$(BUILD_DIR)/$(PROJ_NAME).$(EXEC))


clean:
	$(RM) $(call FixPath,$(BUILD_DIR)/*)
	make clean -C doc
	rmdir $(BUILD_DIR) doc/html

<<<<<<< HEAD


=======
>>>>>>> 940adc565ee9842b4c9e853ca4886e73dd592143
