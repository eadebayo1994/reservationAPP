cmake_minimum_required(VERSION 3.17)
project(reservationApp)

set(CMAKE_CXX_STANDARD 14)

add_executable(reservationApp main.cpp customer.h firstClass.h businessClass.h economyClass.h createTicket.h)