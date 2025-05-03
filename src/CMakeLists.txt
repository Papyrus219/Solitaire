set(gigathon_SRCS
    gigathon.cpp
)

ecm_qt_declare_logging_category(gigathon_SRCS
    HEADER debug.h
    IDENTIFIER PLUGIN_GIGATHON
    CATEGORY_NAME "kdevelop.plugins.gigathon"
    DESCRIPTION "KDevelop plugin: Gigathon"
    EXPORT GIGATHON
)

kdevplatform_add_plugin(gigathon
    SOURCES ${gigathon_SRCS}
)

target_link_libraries(gigathon
    KDev::Interfaces
)
