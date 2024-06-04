cmake_minimum_required(VERSION 3.20)

project(DM_CXX)

set(DM_CXX_VERSION_MAJOR 1)
set(DM_CXX_VERSION_MINOR 0)

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED True)
set(CMAKE_MODULE_PATH "${CMAKE_SOURCE_DIR}/cmake;${CMAKE_MODULE_PATH}")

find_package	(glog 0.7.0 	REQUIRED)

find_package 	(XCB 		REQUIRED)
find_package 	(XKB	 	REQUIRED)
find_package 	(X11 		REQUIRED)

find_package 	(PAM 		REQUIRED)
#find_package 	(PAM_MISC 	REQUIRED)
add_executable	(DM_CXX 	src/main.cpp)

target_include_directories(DM_CXX 
	PRIVATE 
		"${PROJECT_SOURCE_DIR}/include"
)

target_link_libraries(DM_CXX
	glog::glog
)
