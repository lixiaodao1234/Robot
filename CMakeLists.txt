cmake_minimum_required(VERSION 3.20)
#项目名
project(Robot)
set(CMAKE_CXX_STANDARD 11)

# 这里添加 头文件目录
include_directories(src/RobotKinematics src/MyRobotKine)


add_executable(RobotKinematics src/RobotKinematics/main.cpp
        src/RobotKinematics/Frame.cpp
        src/RobotKinematics/Kinematics.cpp
        src/RobotKinematics/Misc.cpp)

add_executable(SimRobotKine src/MyRobotKine/main.cpp
        src/MyRobotKine/DHParam.cpp
        src/MyRobotKine/Kinematics.cpp
        src/MyRobotKine/Utils.cpp)