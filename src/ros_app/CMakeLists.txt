cmake_minimum_required(VERSION 3.10)
project(ros_app)

if(CMAKE_COMPILER_IS_GNUCXX OR CMAKE_CXX_COMPILER_ID MATCHES "Clang")
  add_compile_options(-Wall -Wextra -Wpedantic)
endif()

set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTOUIC ON)
set(CMAKE_AUTORCC ON)

# find dependencies
find_package(ament_cmake REQUIRED)
find_package(rclcpp REQUIRED)
find_package(std_msgs REQUIRED)
find_package(sensor_msgs REQUIRED)
find_package(moveit_msgs REQUIRED)

find_package(Qt6 COMPONENTS Core Widgets Network REQUIRED)
qt_standard_project_setup()

include_directories(${CMAKE_CURRENT_BINARY_DIR})
include_directories(${CMAKE_CURRENT_SOURCE_DIR}/src/header)
include_directories(${CMAKE_CURRENT_SOURCE_DIR}/src/source)
include_directories(${CMAKE_CURRENT_SOURCE_DIR}/src/ui)

set(CMAKE_AUTOUIC_SEARCH_PATHS src/ui)
set(UI_FILES src/ui/mainwindow.ui)
qt6_wrap_ui(UI_HEADERS ${UI_FILES})

add_executable(MainWindow
    src/source/main.cpp
    src/header/UnityConnector.h
    src/source/UnityConnector.cpp
    src/header/JointAngleChanger.h
    src/source/JointAngleChanger.cpp
    src/header/mainwindow.h
    src/source/mainwindow.cpp
    src/header/SerializedTrajectoryMaker.h
    src/source/SerializedTrajectoryMaker.cpp
    src/header/JointStateHandler.h
    src/source/JointStateHandler.cpp
    ${UI_HEADERS}
)

ament_target_dependencies(MainWindow rclcpp std_msgs sensor_msgs moveit_msgs)
target_link_libraries(MainWindow ${Qt6Core_LIBRARIES})
target_link_libraries(MainWindow ${Qt6Widgets_LIBRARIES})
target_link_libraries(MainWindow ${Qt6Network_LIBRARIES})

if(BUILD_TESTING)
  find_package(ament_lint_auto REQUIRED)
  # the following line skips the linter which checks for copyrights
  # comment the line when a copyright and license is added to all source files
  set(ament_cmake_copyright_FOUND TRUE)
  # the following line skips cpplint (only works in a git repo)
  # comment the line when this package is in a git repo and when
  # a copyright and license is added to all source files
  set(ament_cmake_cpplint_FOUND TRUE)
  ament_lint_auto_find_test_dependencies()
endif()

ament_package()
