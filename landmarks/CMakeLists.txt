cmake_minimum_required(VERSION 2.8.4)

PROJECT(landmarks)

#include(/home/affective/dlib-18.16/dlib/cmake)
include(/home/dlib/dlib/cmake)

add_library(landmarks SHARED landmarks.cpp)
target_link_libraries(landmarks dlib-shared)

ADD_EXECUTABLE(landmarksTest main.cpp)
TARGET_LINK_LIBRARIES(landmarksTest landmarks)


#find_package(OpenCV)
#if (OpenCV_FOUND)
#   include_directories(${OpenCV_INCLUDE_DIRS})
#
#   ADD_EXECUTABLE(webcam_face_pose_ex webcam_face_pose_ex.cpp)
#   TARGET_LINK_LIBRARIES(webcam_face_pose_ex dlib ${OpenCV_LIBS} )
#endif()

