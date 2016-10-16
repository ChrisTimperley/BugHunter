#!/bin/bash
#
# Preprocesses the code at a given path, relative to the (shared) repositories
# directory. This script is intended to be executed on a Docker instance, and
# not on the host machine (lib/preprocess should be used for that purpose).
#
fail_msg(){
  echo "FAILED: $1"
}

# Jump to the correct location
src_dir=$1
cd $src_dir || fail_msg "failed to jump to source directory" && exit 1

# Generate configure, if necessary
test -f autogen.sh && ./autogen.sh || fail_msg "autogen" && exit 1
test -f buildconf.sh && ./buildconf.sh || fail_msg "buildconf" && exit 1
test -f Makefile.am && autoreconf -i || fail_msg "autoreconf" && exit 1

# Avoids Redis bugs
test -f Makefile && make distclean || fail_msg "make distclean" && exit 1

# Attempt to configure
if [ -f configure ]; then
  ./configure "CFLAGS=-save-temps" || fail_msg "configure" && exit 1
  configured=0
else
  configure=1
fi

# Attempt to make
if [ ! -f Makefile ]; then
  fail_msg "Makefile missing" && exit 1
fi

if $configured; then
  
else

fi
