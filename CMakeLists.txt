cmake_minimum_required(VERSION 3.10)
project(Effective_C_Examples_and_Exercises)

# Set the source directory
set(SRC_DIR "${CMAKE_SOURCE_DIR}/src")

# Grab all the directories in src
file(GLOB CHAPTER_SRC_DIRS "${SRC_DIR}/*")

# Create an executable for each file
foreach(SRC_DIR ${CHAPTER_SRC_DIRS})
  file(GLOB CHAPTER_SRC "${SRC_DIR}/*.c")
  foreach(SRC_FILE ${CHAPTER_SRC})
    # Get the filename without extension
    get_filename_component(PROJ_NAME ${SRC_FILE} NAME_WE)

    # Get the parent directory (e.g. chapter_1)
    get_filename_component(PARENT_NAME ${SRC_DIR} NAME)

    # Make an executable target
    add_executable(${PROJ_NAME} ${SRC_FILE})

    # (Optional) Set output dir so they all go into "bin/"
    set_target_properties(${PROJ_NAME} PROPERTIES 
    RUNTIME_OUTPUT_DIRECTORY "${CMAKE_BINARY_DIR}/bin/${PARENT_NAME}"
    )
  endforeach()
endforeach()
