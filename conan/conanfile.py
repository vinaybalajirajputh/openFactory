from conans import ConanFile, Meson

class OpenFactoryConan(ConanFile):
    settings = 'os', 'compiler', 'build_type', 'arch'
    generators = 'pkg_config'
    requires = 'eigen/3.3.7@conan/stable'
    
#    def configure(self):
#        meson = Meson(self)

    def build(self):
        meson = Meson(self)
        meson.configure(source_folder='../src')
        meson.build()
