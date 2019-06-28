cmake_minimum_required(VERSION 3.10)

project(ft_retro CXX)
find_package(Curses REQUIRED)

add_executable(${PROJECT_NAME}
        main.cpp
        Entity.cpp
        GameEngine.cpp
        Player.cpp
        Bullet.cpp
        Visual.cpp)

target_link_libraries(${PROJECT_NAME} PRIVATE ${CURSES_LIBRARIES})

target_include_directories(${PROJECT_NAME} PRIVATE ${CURSES_INCLUDE_DIR})

add_executable(test_ncurses
        test_ncurses.cpp)

target_link_libraries(test_ncurses PRIVATE ${CURSES_LIBRARIES})

target_include_directories(test_ncurses PRIVATE ${CURSES_INCLUDE_DIR})
