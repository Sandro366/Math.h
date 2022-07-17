CC = gcc
LDFLAGS = -Wall -Wextra -Werror -std=c11
CFLAGS = -c
NAME = s21_math

TEST = test
OS = $(shell uname)

ifeq ($(OS), Linux)
	LIB_FLAGS = -lcheck -lsubunit -lrt -lpthread -lm
else
	LIB_FLAGS = -lcheck
endif

default: all

all: clean s21_math.a test

rebuild: clean all

test: s21_math.a
	$(CC) $(LDFLAGS) $(TEST).c $(NAME).a $(LIB_FLAGS) -o $(TEST)
	./$(TEST)

s21_math.a:
	$(CC) $(CFLAGS) $(LDFLAGS) -o $(NAME).o $(NAME).c
	ar rcs $(NAME).a $(NAME).o
	ranlib $@

gcov_report:
	$(CC) --coverage $(TEST).c $(NAME).c $(LIB_FLAGS) -o $(TEST)
	./$(TEST)
	lcov -t "$(TEST)" -o $(TEST).info -c -d .
	genhtml -o report $(TEST).info
	open report/index.html 

clean:
	rm -rf *.a *.o *.out *.so $(TEST) *.gc* *.info report

linter:
	cp ../materials/linters/CPPLINT.cfg CPPLINT.cfg
	python3 ../materials/linters/cpplint.py --extensions=c *.c
	python3 ../materials/linters/cpplint.py --extensions=h *.h
	rm -rf CPPLINT.cfg

cppcheck:
	cppcheck --enable=all --suppress=missingIncludeSystem *.c

leaks:
	CK_FORK=no leaks --atExit -- ./$(TEST)

test.c: 
	checkmk s21_test.check > test.c
