from conans import ConanFile, Meson

class OpenFactoryConan(ConanFile):
    settings = 'os', 'compiler', 'build_type', 'arch'
    generators = 'pkg_config'
    requires = ['eigen/3.3.7@conan/stable',
            'fmt/5.3.0@bincrafters/stable',
            'spdlog/1.3.1@bincrafters/stable']
    
    def build(self):
        meson = Meson(self)
        meson.configure(source_folder='../src')
        meson.build()
