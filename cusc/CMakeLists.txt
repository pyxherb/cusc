find_package(peff REQUIRED)

file(GLOB HEADERS *.h)
file(GLOB SRC *.cc)

add_library(cusc)
set_target_properties(cusc PROPERTIES CXX_STANDARD 17)
add_library(cusc_static)
set_target_properties(cusc_static PROPERTIES CXX_STANDARD 17)

target_sources(cusc PRIVATE ${HEADERS} ${SRC})
target_sources(cusc_static PRIVATE ${HEADERS} ${SRC})
target_compile_definitions(cusc PRIVATE CLCACRI_BUILDING=1)
target_compile_definitions(cusc_static PRIVATE CLCACRI_BUILDING=1)
target_link_libraries(cusc PUBLIC peff_containers)
target_link_libraries(cusc_static PUBLIC peff_containers_static)

add_subdirectory("ast")
