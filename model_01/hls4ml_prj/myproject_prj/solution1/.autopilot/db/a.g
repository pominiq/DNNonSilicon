#!/bin/sh
lli=${LLVMINTERP-lli}
exec $lli \
    /home/pominiq/ProjectFolder/model_1/hls4ml_prj/myproject_prj/solution1/.autopilot/db/a.g.bc ${1+"$@"}
