# -*- coding: utf-8 -*-

name = 'gflags'

version = '2.2.2-ta.1.0.0'

authors = [
    'benjamin.skinner',
    'google',
]

requires = [
]

@early()
def private_build_requires():
    import sys
    if 'win' in str(sys.platform):
        return ['visual_studio']
    else:
        return ['gcc-7']

variants = [
    ['platform-windows', 'arch-x64', 'os-windows-10'],
    #['platform-linux', 'arch-x64'],
]

build_system = "cmake"

def commands():

     # Split and store version and package version
    split_versions = str(version).split('-')
    env.GFLAGS_VERSION.set(split_versions[0])
    env.GFLAGS_PACKAGE_VERSION.set(split_versions[1])

    env.GFLAGS_ROOT_DIR.set( "{root}" )
    env.GFLAGS_LIB_DIR.set( "{root}/lib" )
    env.GFLAGS_INCLUDE_DIR.set( "{root}/include" )

    env.PATH.append( "{root}/bin" )
