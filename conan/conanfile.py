from conans import ConanFile, Meson


class OpenFactoryConan(ConanFile):
    settings = "os", "compiler", "build_type", "arch"
    generators = "pkg_config"
    requires = [
        "eigen/3.3.7@conan/stable",
        "fmt/5.3.0@bincrafters/stable",
        "spdlog/1.3.1@bincrafters/stable",
        # "sdl2/2.0.9@bincrafters/stable",
        # "boost/1.70.0@conan/stable", meson currently does not support conan + boost. see https://github.com/mesonbuild/meson/issues/5438
    ]

    def build(self):
        meson = Meson(self)
        meson.configure(source_folder="../src")
        meson.build()
