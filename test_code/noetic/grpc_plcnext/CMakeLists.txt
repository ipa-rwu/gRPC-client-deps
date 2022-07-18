cmake_minimum_required(VERSION 3.0.2)
project(grpc_plcnext)

add_compile_options(-std=c++11)

set (TOOLCHAIN "/opt/pxc/sdks/AXCF3152/2022.0")
set (ARPVERSION "2022.0.5")
set (TARGETNAME "AXCF3152")

set (CMAKE_TOOLCHAIN_FILE ${TOOLCHAIN}/toolchain.cmake CACHE STRING "PLCnext toolchain file")
set (ARP_TOOLCHAIN_ROOT ${TOOLCHAIN} CACHE STRING "PLCnext toolchain root directory")
set (ARP_DEVICE ${TARGETNAME} CACHE STRING "PLCnext target device name")

set (WILDCARD_SOURCE *.cpp *.cc)
set (WILDCARD_HEADER *.h *.hpp *.hxx)


file(GLOB_RECURSE Sources 
    include/grpc_plcnext/${WILDCARD_SOURCE}
)

file(GLOB_RECURSE Headers 
    include/grpc_plcnext/${WILDCARD_HEADER}
)

# find dependencies
find_package(catkin REQUIRED)

find_package(catkin REQUIRED COMPONENTS
  roscpp
  std_msgs
  geometry_msgs
  nav_msgs
)
find_package(gRPC CONFIG REQUIRED)

catkin_package(
  INCLUDE_DIRS include
)

include_directories(
  include
  ${catkin_INCLUDE_DIRS}
)


add_executable(pub src/pub.cpp 
                    src/grpc_client.cpp 
                    src/dataaccess_client.cpp 
                    src/subscription_client.cpp 
                    ${Headers} 
                    ${Sources})
target_link_libraries(pub  gRPC::gpr gRPC::grpc gRPC::grpc++ ${catkin_LIBRARIES})
add_dependencies(pub ${${PROJECT_NAME}_EXPORTED_TARGETS} ${catkin_EXPORTED_TARGETS})
target_include_directories(pub
    PUBLIC
    $<BUILD_INTERFACE:${rclcpp_INCLUDE_DIRS}>
    $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include>
    $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include/grpc_plcnext/ServiceStubs>
    $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include/grpc_plcnext/ServiceStubs/Includes>
)
