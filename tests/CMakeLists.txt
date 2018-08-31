CMAKE_MINIMUM_REQUIRED(VERSION 2.6.2)

PROJECT(tests
        LANGUAGES CXX)

add_definitions(-DGTEST_LANGUAGE_CXX11)

find_package(Threads REQUIRED)

SET(GOOGLETEST_DIR ${CMAKE_CURRENT_SOURCE_DIR}/../googletest-release-1.8.0)

if (EXISTS ${GOOGLETEST_DIR})
    SET(GTestSrc ${GOOGLETEST_DIR}/googletest)
    SET(GMockSrc ${GOOGLETEST_DIR}/googlemock)
else ()
    message( FATAL_ERROR "No googletest src dir found - set GOOGLETEST_DIR to enable!")
endif ()

include_directories(../library ${GTestSrc} ${GTestSrc}/include ${GMockSrc} ${GMockSrc}/include)

add_executable(${PROJECT_NAME} main.cpp tests.cpp)

add_test(${PROJECT_NAME} COMMAND ${PROJECT_NAME})

target_link_libraries(${PROJECT_NAME} PRIVATE Threads::Threads gtest gmock library)
