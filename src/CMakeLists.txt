add_library(bridge-tcs-core SHARED
  core/Application.cpp
)

add_executable(bridge-tcs-console
  bridge-tcs-console.cpp
  ui/console/Application.cpp
)

target_link_libraries(bridge-tcs-console bridge-tcs-core)
