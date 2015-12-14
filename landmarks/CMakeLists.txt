cmake_minimum_required(VERSION 2.8.4)

PROJECT(landmarks)

FIND_PACKAGE(dlib REQUIRED)

add_library(landmarks SHARED landmarks.cpp)
target_link_libraries(landmarks ${dlib_LIBRARIES})

ADD_EXECUTABLE(landmarksTest main.cpp)
TARGET_LINK_LIBRARIES(landmarksTest landmarks)

#find_package(OpenCV)
#if (OpenCV_FOUND)
#   include_directories(${OpenCV_INCLUDE_DIRS})
#
#   ADD_EXECUTABLE(webcam_face_pose_ex webcam_face_pose_ex.cpp)
#   TARGET_LINK_LIBRARIES(webcam_face_pose_ex dlib ${OpenCV_LIBS} )
#endif()

