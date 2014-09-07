add_library(bridge-tcs-core SHARED
  core/Rubber.cpp
)

add_executable(bridge-tcs-console
  bridge-tcs-console.cpp
  ui/console/Rubber.cpp
)

target_link_libraries(bridge-tcs-console bridge-tcs-core)
