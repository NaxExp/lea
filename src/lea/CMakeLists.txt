file(GLOB_RECURSE SOURCES "*.c" "*.h")
add_executable(lea ${SOURCES})
target_link_libraries(lea liblea)
