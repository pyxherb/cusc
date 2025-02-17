file(GLOB HEADERS *.h)
file(GLOB SRC *.cc)

target_sources(cusc PRIVATE ${HEADERS} ${SRC})
target_sources(cusc_static PRIVATE ${HEADERS} ${SRC})
