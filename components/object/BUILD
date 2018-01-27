cc_library(
    name = "lib",
    srcs = glob([
        "lib/src/main/cpp/*.cpp",
    ]),
    hdrs = glob([
        "lib/src/main/include/*.h", 
        "lib/src/main/cpp/*.h",
    ]),
    copts = [
        "-Icomponents/object/lib/src/main/include",
        "-Icomponents/object/lib/src/main/cpp",
        "-Ilibraries/event-loop/src/main/include",
    ],
    deps = [
        "//libraries/event-loop",
        "//libraries/axis-messages:cpp",
    ],
    visibility = ["//visibility:private"]
)

cc_library(
    name = "object",
    srcs = glob([
        "main/src/main/cpp/*.cpp",
    ]),
    hdrs = glob([
        "main/src/main/include/*.h", 
        "main/src/main/cpp/*.h",
    ]),
    copts = [
        "-Icomponents/object/lib/src/main/include",
        "-Icomponents/object/main/src/main/include",
        "-Icomponents/object/main/src/main/cpp",
    ],
    deps = [
        ":lib",
    ],
    visibility = [
        "//binaries/controller:__pkg__",
    ],
)