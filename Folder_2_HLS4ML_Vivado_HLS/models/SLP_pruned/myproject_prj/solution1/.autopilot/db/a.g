#!/bin/sh
lli=${LLVMINTERP-lli}
exec $lli \
    /home/pominiq/projectfolder/Folder_2_HLS4ML_Vivado_HLS/models/hls4ml_prj/myproject_prj/solution1/.autopilot/db/a.g.bc ${1+"$@"}