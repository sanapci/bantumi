#!/bin/bash

set -eou pipefail

SOURCE_ROOT=$(dirname $(dirname $0))

find $SOURCE_ROOT/src -type f -exec clang-format -i {} \;