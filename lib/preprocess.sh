#!/bin/bash
#
# Preprocesses the code at a given location
#


# JUMP TO LOCATION

fail_with(){
  msg=$1
  echo "FAILED: $msg"
  exit 1
}

test -f autogen.sh && ./autogen.sh || fail_with "autogen failed"
