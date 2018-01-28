load("@bazel_tools//tools/build_defs/pkg:pkg.bzl", "pkg_tar", "pkg_deb")

pkg_tar(
    name = "controller.tar",
    strip_prefix = "",
    package_dir = "/usr/bin",
    srcs = [
        "//binaries/controller",
    ],
    mode = "0755",
)

pkg_tar(
    name = "controller.tgz",
    extension = "tar.gz",
    deps = [
        ":controller.tar",
    ],
)

pkg_deb(
    name = "controller.deb",
    architecture = "x86",
    built_using = "bazel (0.9.0)",
    data = ":controller.tgz",
    depends = [
        "zlib1g-dev",
        "unzip",
    ],
    description_file = "debian/controller-description",
    homepage = "http://www.visualact.se",
    maintainer = "Visual ACT <support@visualact.se>",
    package = "controller",
    version = "4.1.0",
)
