# cmake_minimum_required(VERSION 3.0)
# project(MyProgram)

# set(SRC_LIST add.c div.c main.c mult.c sub.c)
# add_executable(app ${SRC_LIST})

# set(CMAKE_CXX_STANDARD 11)
# set(CMAKE_CXX_STANDARD 14)
# set(CMAKE_CXX_STANDARD 17)

# add_executable(app add.c div.c main.c mult.c sub.c)

# 2.2.3 指定输出的路径
# set(HOME /home/laurence/my_program)
# set(EXECUTABLE_OUTPUT_PATH ${HOME}/bin)

# 2.3 搜索文件
# 2.3.1 方式1  aux_source_directory
# cmake_minimum_required(VERSION 3.0)
# project(MyProgram)
# #CMAKE_SOURCE_DIR 当前CMakeLists.txt所在的路径
# #CMAKE_CURRENT_SOURCE_DIR 当前CMakeLists.txt所在的路径
# #include_directories是指定头文件的搜索路径
# #aux_source_directory是指定源文件的搜索路径
# include_directories(${CMAKE_SOURCE_DIR}/include)
# aux_source_directory(${CMAKE_CURRENT_SOURCE_DIR}/src SRC_LIST)
# add_executable(app ${SRC_LIST})

# 2.3.2 方式2 file 

# #搜索当前目录的src目录下所有的源文件，并存储到变量中
# file(GLOB MAIN_SRC ${CMAKE_CURRENT_SOURCE_DIR}/src/* .cpp)
# file(GLOB MAIN_HEAD ${CMAKE_CURRENT_SOURCE_DIR}/include/* .h)

# 2.5 制作动态库或静态库
# 2.5.1 制作静态库
# add_library(库名称 STATIC 源文件1 [源文件2] ...) 


# cmake_minimum_required(VERSION 3.0)
# project(MyProgram)
# #PROJECT_SOURCE_DIR 当前CMakeLists.txt所在的路径
# include_directories(${PROJECT_SOURCE_DIR}/include)
# file(GLOB SRC_LIST ${CMAKE_CURRENT_SOURCE_DIR}/src/* .cpp)
# add_library(calc STATIC ${SRC_LIST})

# 2.5.2 制作动态库
# add_library(库名称 SHARED 源文件1 [源文件2] ...)  #shared表示动态库，static表示静态库

# cmake_minimum_required(VERSION 3.0)
# project(MyProgram)
# include_directories(${PROJECT_SOURCE_DIR}/include)
# file(GLOB SRC_LIST ${CMAKE_CURRENT_SOURCE_DIR}/src/* .cpp)
# add_library(calc SHARED ${SRC_LIST})

# 2.5.3 指定输出的路径
# 方式1 - 适用于动态库

# cmake_minimum_required(VERSION 3.0)
# project(MyProgram)
# include_directories(${PROJECT_SOURCE_DIR}/include)
# file(GLOB SRC_LIST ${CMAKE_CURRENT_RESOURCE_DIR}/src/* .cpp)
# set(EXECUTABLE_OUTPUT_PATH ${PROJECT_SOURCE_DIR}/lib)
# add_library(cala SHARED ${SRC_LIST})

# 方式2 - 都适用
# cmake_minimum_required(VERSION 3.0)
# project(MYproject)
# include_directories(${PROJECT_SOURCE_DIR}/include)
# file(GLOB SRC_LIST ${CMAKE_CURRENT_RESOURCE_DIR}/csr/* .cpp)
# set(LIBRARY_OUTPUT_PATH ${PROJECT_SOURCE_SIRC_DIR}/lib)
# add_library(cala STATIC ${SRC_LIST})
# add_library(cala SHARED ${SRC_LIST})


# cmake_minimum_required(VERSION 3.0)
# project(MyProgram)
# include_directories(${PROJECT_SOURCE_DIR}/include)
# file(GLOB SRC_LIST ${CMAKE_CURRENT_SOURCE_DIR}/src/* .cpp)
# set(LIBRARY_OUTPUT_PATH ${PROJECT_SOURCE_DIR}/lib)
# add_library(calc STATIC ${SRC_LIST})
# add_library(cala SHARED ${SRC_LIST})


# 2.6 包含库文件
# 2.6.1 链接静态库
# link_libraries(<static lib> [<static lib>...])


# cmake_minimum_required(VERSION 3.0)
# project(MyProgram)
# include_directories(${PROJECT_SOURCE_DIR}/include)
# file(GLOB SRC_LIST ${CMAKE_CURRENT_SOURCE_DIR}/src/* .cpp)
# link_libraries(libcalc.a)
# add_executable(app ${SRC_LIST})

# 2.6.2 链接动态库
# target_link_libraries(
#     <target> 
#     <PRIVATE|PUBLIC|INTERFACE> <item>... 
#     [<PRIVATE|PUBLIC|INTERFACE> <item>...]...)


cmake_minimum_required(VERSION 3.0)
project(MyProgram)
include_directories(${PROJECT_SOURCE_DIR}/include)
file(GLOB SRC_LIST ${CMAKE_CURRENT_SOURCE_DIR}/src/* .cpp)
add_executable(app ${SRC_LIST})
target_link_libraries(app pthread cala)


cmake_minimum_required(VERSION 3.0)
project(MYproject)
include_directories(${PROJECT_SOURCE_DIR}/include)
file(GLOB SRC_LIST ${CMAKE_CURRENT_SOURCE_DIR}/sec/* .cpp)
link_directories(${PROJECT_SOURCE_DIR}/lib)
add_executable(app ${SRC_LIST})
targe_link_libraries(app cala)


cmake_minimum_required(VERSION 3.0)
project(MyProgram)
#set 命令可以定义一个变量，并为其赋值
#TEMP是变量名，"hello, world"是变量的值
set(TEMP "hello, world")
file(GLOB SRC_FILE1 ${PROJECT_SOURCE_DIR}/src/* .cpp)
file(GLOB SRC_FILE2 ${PROJECT_SOURCE_DIR}/src2/* .cpp)
set(SRC_FILE ${SRC_FILE1} ${SRC_FILE2} ${TEMP})
add_executable(app ${SRC_FILE})


cmake_minimum_required(VERSION 3.0)
project(MYproject)
include_directories(${PROJECT_SOURCE_DIR}/include)
file(GLOB SRC_LIST ${PROJECT_SOURCE_DIR}/src/* .cpp)
message(STATUS "message:${SRC_LIST}")
list(REMOVE_ITEM SRC_LIST ${PROJECT_SOURCE_DIR}/src/main.c)
message(STATUS "message:${SRC_LIST}")