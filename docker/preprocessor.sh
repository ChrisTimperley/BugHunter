#!/bin/bash
#
# Preprocesses the code at a given path, relative to the (shared) repositories
# directory. This script is intended to be executed on a Docker instance, and
# not on the host machine (lib/preprocess should be used for that purpose).
#
fail(){
  echo "FAILED: $1"
  exit 1
}

# Fetch the provided user ID and the number of available threads
userid=$1
threads=$2

# Jump to the correct location
cd /repository || fail "failed to jump to source directory"

# Generate configure, if necessary
test -f autogen.sh && ./autogen.sh || fail "autogen"
test -f buildconf.sh && ./buildconf.sh || fail "buildconf"
test -f Makefile.am && autoreconf -i || fail "autoreconf"

# Avoids Redis bugs
test -f Makefile && make distclean || fail "make distclean"

# Attempt to configure
if [ -f configure ]; then
  ./configure "CFLAGS=-save-temps" || fail "configure"
  configured=0
else
  configure=1
fi

# Attempt to make
if [ ! -f Makefile ]; then
  fail "Makefile missing" && exit 1
fi

if $configured; then
  
else

fi
