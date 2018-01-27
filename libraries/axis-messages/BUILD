proto_library(
    name = "AxisMessages",
    srcs = [
        "proto/src/main/protobuf/AxisMessages.proto"
    ],
    deps = [
        "//libraries/base-messages:BaseMessages"
    ],
    visibility = [
        ":__pkg__",
    ],
)

cc_proto_library(
    name="cpp",
    deps = [
        ":AxisMessages",
    ],
    visibility = [
        "//components/axis:__pkg__",    
        "//components/object:__pkg__",    
    ],
)