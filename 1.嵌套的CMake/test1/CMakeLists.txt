cmake_minimum_required(VERSION 3.0)
project(CALC_TEST)
#aux_source_directory用法是指定源文件的搜索路径，并将搜索到的源文件存储到变量中
#aux缩写自auxiliary，表示辅助的意思
aux_source_directory(./ SRC)
include_directories(${HEAD_PATH})
link_directories(${LIB_PATH})
link_libraries(${CALC_LIB})
set(EXECUTABLE_OUTPUT_PATH ${EXEC_PATH})
add_executable(${APP_NAME1} ${SRC})