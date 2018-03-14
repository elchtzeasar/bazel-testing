java_binary(
    name = "test-steps",
    main_class = "se.visualact.TestSteps",
    srcs = glob(["src/main/java/se/visualact/*.java"]),
)

sh_test(
    name = "integration-tests",
    size = "large",
    srcs = ["test.sh"],
    data = [
        "//tests/steps:integration-test-deps",
    ],
)