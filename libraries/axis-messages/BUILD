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
    ]
)

cc_proto_library(
    name="cpp",
    deps = [
        ":AxisMessages"
    ]
)