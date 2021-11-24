
include_directories(
    ${CMAKE_SOURCE_DIR}/samples/format/csv
)

set(SAMPLES_CSV_SRC
    ${CMAKE_CURRENT_SOURCE_DIR}/1_basic.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/2_optional_headers.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/3_quotes_policy.cpp
)

add_executable(1_basic 1_basic.cpp)
add_executable(2_optional_headers 2_optional_headers.cpp)
add_executable(3_quotes_policy 3_quotes_policy.cpp)
