cmake_minimum_required(VERSION 3.0)
 
if(POLICY CMP0020)
  cmake_policy(SET CMP0020 NEW)
endif()
 
PROJECT(OpenCVWidget)
 
find_package(OpenCV REQUIRED)
find_package(Qt5Widgets REQUIRED)

# assuming QT5 in
set(CMAKE_AUTOMOC ON)	##replace the qt5_wrap_cpp
set(CMAKE_AUTOUIC ON)	##replace the qt5_wrap_ui
 
include_directories(${CMAKE_CURRENT_SOURCE_DIR} ${OpenCV_INCLUDE_DIRS})
 
file(GLOB UI_FILES *.ui)
file(GLOB HEADERS *.h)
file(GLOB SOURCES *.cpp)

add_executable(OpenCVWidget MACOSX_BUNDLE ${SOURCES} ${HEADERS} ${UISrcs})
#if you want, you can add ${MOCSrcs} to the project

#target_link_libraries(OpenCVWidget ${OpenCV_LIBS} ${QT_LIBRARIES})
target_link_libraries(OpenCVWidget ${OpenCV_LIBS} Qt5::Widgets)