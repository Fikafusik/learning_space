
include_directories(
    ${CMAKE_SOURCE_DIR}/format/csv
)

set(CSV_SRC
    ${CMAKE_CURRENT_SOURCE_DIR}/csv.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/quotes_policy.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/reader.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/record.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/writer.cpp
)

add_library(csv ${CSV_SRC})
