set(GTEST_SHUFFLE 1)

add_executable(
    fraction_test
    main.cpp
    integersFractionTest.cpp
    doubleFractionTest.cpp)

target_include_directories(fraction_test PUBLIC ../vendor/googletest/googletest/include 
                                           ${CMAKE_SOURCE_DIR}/include)
target_link_libraries(fraction_test PUBLIC gtest)
