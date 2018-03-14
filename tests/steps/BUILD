java_binary(
    name = "test-steps",
    main_class = "se.visualact.TestSteps",
    srcs = glob(["src/main/java/se/visualact/*.java"]),
    visibility = [
        ":__pkg__",
    ],
)


filegroup(
    name = "integration-test-deps",
    srcs = [
        ":test-steps",
        "src/main/bash/cucumber.sh",
    ],
    visibility = [
        "//tests/integration-tests:__pkg__",
    ],
)