cmake_minimum_required(VERSION 4.3)
project(LearnC___Alshain)

set(CMAKE_CXX_STANDARD 20)

add_executable(introduction introduction.cpp)
add_executable(variables Variables/Variables.cpp)
add_executable(const Const/Const.cpp)
add_executable(namespace Namespace/Namespace.cpp)
add_executable(typedef Typedef/Typedef.cpp)
add_executable(arithmetic-operator ArithmeticOperator/ArithmeticOperator.cpp)
add_executable(type-conversion TypeConversion/TypeConversion.cpp)
add_executable(user-input UserInput/UserInput.cpp)