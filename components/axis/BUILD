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
        "-Icomponents/axis/lib/src/main/include",
        "-Icomponents/axis/lib/src/main/cpp",
        "-Ilibraries/event-loop/src/main/include",
    ],
    deps = [
        "//libraries/event-loop",
        "//libraries/axis-messages:cpp",
    ],
)

cc_library(
    name = "axis",
    srcs = glob([
        "main/src/main/cpp/*.cpp",
    ]),
    hdrs = glob([
        "main/src/main/include/*.h", 
        "main/src/main/cpp/*.h",
    ]),
    copts = [
        "-Icomponents/axis/lib/src/main/include",
        "-Icomponents/axis/main/src/main/include",
        "-Icomponents/axis/main/src/main/cpp",
    ],
    deps = [
        ":lib",
    ],
    visibility = [
        "//binaries/controller:__pkg__",
    ],
)