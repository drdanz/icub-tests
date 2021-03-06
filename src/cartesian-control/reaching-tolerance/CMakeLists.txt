# Copyright: (C) 2017 iCub Facility - Istituto Italiano di Tecnologia
# Authors: Ugo Pattacini <ugo.pattacini@iit.it>
#          Giulia Vezzani <giulia.vezzani@iit.it>
# CopyPolicy: Released under the terms of the GNU GPL v2.0.

cmake_minimum_required(VERSION 3.0)

# set the project name
project(CartesianControlReachingToleranceTest)

list(APPEND CMAKE_MODULE_PATH ${YARP_MODULE_PATH})

# import math symbols from standard cmath
add_definitions(-D_USE_MATH_DEFINES)

# add the source codes to build the plugin library
rtf_add_plugin(${PROJECT_NAME} HEADERS ${PROJECT_NAME}.h
                               SOURCES ${PROJECT_NAME}.cpp)

# add required libraries
target_link_libraries(${PROJECT_NAME} ${RTF_LIBRARIES} ${YARP_LIBRARIES} YARP::YARP_rtf)

# set the installation options
install(TARGETS ${PROJECT_NAME}
        EXPORT ${PROJECT_NAME}
        COMPONENT runtime
        LIBRARY DESTINATION lib)
