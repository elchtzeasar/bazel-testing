proto_library(
    name = "BaseMessages",
    srcs = [
        "proto/src/main/protobuf/BaseMessages.proto"
    ],
    visibility = [
        ":__pkg__",
        "//libraries/axis-messages:__pkg__",
    ],
)

cc_proto_library(
    name="cpp",
    deps = [":BaseMessages"],
    visibility = [
        "//libraries/event-loop:__pkg__",
    ],
)