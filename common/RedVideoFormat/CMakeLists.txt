add_library(
    RedVideoFormat

    H264Reader.cpp
    RedByte.cpp
    )

INSTALL(
    TARGETS RedVideoFormat
    RUNTIME DESTINATION bin        
    LIBRARY DESTINATION lib        
    ARCHIVE DESTINATION lib
    )