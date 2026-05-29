cmake_minimum_required(VERSION 3.0)
project(SORT_TEST)
aux_source_directory(./ SRC)
include_directories(${HEAD_PATH})
link_directories(${LIB_PATH})

set(EXECUTABLE_OUTPUT_PATH ${EXEC_PATH})
add_executable(${APP_NAME2} ${SRC})
target_link_libraries(${APP_NAME2} ${SORT_LIB})