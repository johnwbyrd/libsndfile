# libsndfile-cmake

This is a proof of concept port of the libsndfile library to the CMake build system.
It should not be used for any kind of production work.  It was used principally to 
debug file reading problems on Win32 with libsndfile.

As of this writing, it builds on a Win32 build using CMake to target Visual Studio 2013.

The ALAC and CAF parsers were removed from the build in order to get it working.  A 
config.h was cheesed together which seems to work for the moment.

It is pretty much guaranteed to not work on any other build system at the moment. 
Moving libsndfile off of its gcc and Linux roots will be a major undertaking.

## libsndfile

libsndfile is a C library for reading and writing files containing sampled audio
data.  The original code is available from http://www.mega-nerd.com/libsndfile/ .

