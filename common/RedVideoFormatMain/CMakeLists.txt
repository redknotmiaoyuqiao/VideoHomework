add_executable(
    RedVideoFormatMain
    Main.cpp
    )

include_directories (../)

target_link_libraries (RedVideoFormatMain RedVideoFormat)

INSTALL(
    TARGETS RedVideoFormatMain
    RUNTIME DESTINATION bin        
    LIBRARY DESTINATION lib        
    ARCHIVE DESTINATION lib
    )