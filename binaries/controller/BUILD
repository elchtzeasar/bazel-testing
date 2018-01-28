cc_binary(
    name = "controller",
    srcs = glob(["main/src/main/cpp/*.cpp"]),
    deps = [    
        "//components/axis",
        "//components/object",
    ],
    copts = [
        "-Icomponents/axis/main/src/main/include",
        "-Icomponents/object/main/src/main/include",
    ],
    visibility = [
        "//packages:__pkg__",
    ],
)