file(GLOB SRCS *.cpp)

find_package(GTest REQUIRED)
include_directories(${GTEST_INCLUDE_DIRS})

add_executable(test_sum ${SRCS})

target_link_libraries(test_sum sum ${GTEST_LIBRARIES} pthread)
target_include_directories(test_sum PRIVATE ../)

add_test(NAME test_sum
         COMMAND test_sum)