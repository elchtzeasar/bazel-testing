cc_library(
    name = "event-loop",
    srcs = glob([
        "src/main/cpp/*.cpp",
    ]),
    hdrs = glob([
        "src/main/include/*.h", 
        "src/main/cpp/*.h",
    ]),
    copts = [
        "-Ilibraries/event-loop/src/main/include",
        "-Ilibraries/event-loop/src/main/cpp",
    ],
    deps = [
        "//libraries/base-messages:cpp",
    ],
    visibility = [
        "//components/axis:__pkg__",    
        "//components/object:__pkg__",    
    ],
)

cc_test(
    name = "unit-tests",
    timeout = "short",
    srcs = glob(["src/test/cpp/*.cpp"]),
    copts = [
        "-Iexternal/gtest/include",
        "-Ilibraries/event-loop/src/main/include",
        "-Ilibraries/event-loop/src/main/cpp",
    ],
    deps = [
        ":event-loop",
        "@gtest//:main",
    ],
)