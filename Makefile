CXX=g++
CXXFLAGS= -std=c++0x -g -fprofile-arcs -ftest-coverage

LINKFLAGS= -lcppunit

SRC_DIR = src
SRCS = $(SRC_DIR)/Characters.cpp $(SRC_DIR)/Helpers.cpp $(SRC_DIR)/MapInterface-IMP.cpp $(SRC_DIR)/puzzles.cpp $(SRC_DIR)/Room-IMP.cpp $(SRC_DIR)/WonderLand-IMP.cpp $(SRC_DIR)/WonderMain.cpp $(SRC_DIR)/SaveFunction.cpp


SRC_INCLUDE = include
INCLUDE = -I ${SRC_INCLUDE}

PROGRAM = game

.PHONY: all
all: $(PROGRAM) docs

# Default rule for compiling .cc to .o
%.o: %.cpp
	$(CXX) $(CXXFLAGS) -c $< -o $@

.PHONY: clean
clean:
	rm -rf *~ $(SRC)/*.o $(TEST_SRC)/*.o *.gcov *.gcda *.gcno $(COVERAGE_RESULTS) $(PROGRAM_TEST) $(MEMCHECK_RESULTS) $(COVERAGE_DIR) ./document saveFile.txt $(PROGRAM)

.PHONY: clean-allPlayer
clean-all: clean
	rm -rf $(PROGRAM) $(PROGRAM_TEST)

$(PROGRAM):
	$(CXX) $(CXXFLAGS) -o $(PROGRAM) $(INCLUDE) $(SRC_DIR)/*.cpp $(LINKFLAGS)


docs: ${SRC_INCLUDE}
	doxygen config
