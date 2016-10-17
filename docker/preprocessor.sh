#!/bin/bash
#
# Preprocesses the project residing within the /repository directory of this
# Docker instance, before correcting the ownership of files within the
# directory to match that of the calling user on the host machine.
#

# Fetch the provided user ID and the number of available threads
#USER_ID=$1
#THREADS=$2

reset_ownership(){
  #chown -R $USER_ID /repository
  return 0
}

fail(){
  echo "FAILED: $1"
  reset_ownership $USER_ID
  exit 1
}

# Jump to the correct location
cd /repository || fail "failed to jump to source directory"

echo "Preprocessing wabble wabble"

# Generate configure, if necessary
if [ -f autogen.sh ] ; then
  ./autogen.sh || fail "autogen"
fi
if [ -f buildconf.sh ] ; then
  ./buildconf.sh || fail "buildconf"
fi
if [ -f Makefile.am ] ; then
  autoreconf -i || fail "autoreconf"
fi

# Avoids Redis bugs
if [ -f Makefile ] ; then
  make distclean || fail "make distclean"
fi

## Attempt to configure
if [ -f configure ]; then
  ./configure "CFLAGS=-save-temps" || fail "configure"
  configured=0
else
  configured=1
fi

#
## Attempt to make
#if [ ! -f Makefile ]; then
#  fail "Makefile missing" && exit 1
#fi
#
#if $configured; then
#  
#else
#
#fi

# Reset file ownership
reset_ownership && exit 0
