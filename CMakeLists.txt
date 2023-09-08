cmake_minimum_required(VERSION 3.26)
project(vcWidget_prj)
set (wxWidgets_ROOT_DIR  "C:/vxWidgets")
set (wxWidgets_LIB_DIR  "C:/vxWidgets/lib/gcc810_x64_dll")
find_package(wxWidgets REQUIRED COMPONENTS net core base)

include(${wxWidgets_USE_FILE})


file (GLOB project_GLOB
src/*)
add_executable( main ${project_GLOB})


target_link_libraries(main ${wxWidgets_LIBRARIES})
target_include_directories(main PRIVATE ${wxWidgets_LIBRARIES_DIRS})