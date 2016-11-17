#!/bin/bash
HERE=$( cd "$( dirname "${BASH_SOURCE[0]}" )" && pwd )
REPO="/home/chris/bughunter/repositories/7ebd8d5f50cf871de31a96f81ebe8402c9fc2a06"
DOCKER="bh"
echo "hello!"
$HERE/preprocess $REPO $DOCKER
