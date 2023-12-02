"""
Date: Oct 18 14:00
Author: David Matthew Lane
Purpose: Testing HLS4ML to OpenLane2 workflow

Structure:
    - Libraries and path definitions
    - Function and class definitions
    - Main

OpenLane2 flow and tool imports uses Yosys for synthesis, OpenRoad flows, Magic for simulation
and Netgen for generating netlists. Additionally Klayout can be used to view the implementation
"""

#from openlane.flows import Flow
## Set path for Generated Verilog project
#os.environ['PATH'] += os.pathsep + '/home/pominiq/ProjectFolder/model_1/hls4ml_prj/myproject_prj/solution1/impl/verilog'

import os
from openlane.flows import SequentialFlow, Flow
from openlane.steps import Yosys, Misc, OpenROAD, Magic, Netgen
from openlane.steps.openroad import OpenGUI

class MyFlow1(SequentialFlow):
    Steps = [
        Yosys.Synthesis,
        OpenROAD.CheckSDCFiles,
        OpenROAD.Floorplan,
        OpenROAD.TapEndcapInsertion,
        OpenROAD.GeneratePDN,
        OpenROAD.IOPlacement,
        OpenROAD.GlobalPlacement,
        OpenROAD.DetailedPlacement,
        OpenROAD.GlobalRouting,
        #OpenROAD.CheckAntennas,
        OpenROAD.DetailedRouting,
        OpenROAD.FillInsertion,
        Magic.StreamOut,
        Magic.DRC,
        Magic.SpiceExtraction,
        Netgen.LVS
    ]

MyFlow2 = Flow.factory.get("Classic")

def main():
    ## Define flow and its floorplanning parameters.
    # Specify Design Name
    # and .v-file location (for single directory use "dir:/*.v")
            # Define clock properties
            # For simple device can be defined as 'False'
                # Parameters related to floorplanning.
                # To avoid error PDN-0185 :
                #       Insufficient width (3.22 um) to add straps on layer met4 in grid "stdcell_grid" with 
                #       total strap width
                # Need to define die area and parameters for pitch.
    
    flow = MyFlow1(
        {
            "PDK": "sky130A",
            "DESIGN_NAME": "myproject",
            "VERILOG_FILES": "refg::$DESIGN_DIR/model_4/hls4ml_prj/myproject_prj/solution1/impl/verilog/*.v",
            "CLOCK_PORT": 'ap_clk',
            "CLOCK_PERIOD": 10,
            "USE_LIGHTER": True,
            "SYNTH_AUTONAME": False,
            "SYNTH_NO_FLAT": True,
            "SYNTH_SIZING": True,
            "SYNTH_ABC_BUFFERING": False,
            "SYNTH_SHARE_RESOURCES": True,
            "SYNTH_STRATEGY": "DELAY 4",
            "MAX_TRANSITION_CONSTRAINT": 1.0,
            "MAX_FANOUT_CONSTRAINT": 16,
            "FP_SIZING": "absolute",
            "DIE_AREA": [0, 0, 100000, 100000],
            "PL_RESIZER_SETUP_SLACK_MARGIN": 0.4,
            "GRT_RESIZER_SETUP_SLACK_MARGIN": 0.2,
            "GRT_RESIZER_HOLD_SLACK_MARGIN": 0.2,
            "PL_RESIZER_HOLD_SLACK_MARGIN": 0.4,
            "MAGIC_DEF_LABELS": False,
            "RUN_ANTENNA_REPAIR": False,
            "RUN_HEURISTIC_DIODE_INSERTION": False,
            #"HEURISTIC_ANTENNA_THRESHOLD": 110,
            "GRT_ANTENNA_ITERS": 5,
            "GRT_ADJUSTMENT": 0.2,
            "PL_TARGET_DENSITY_PCT": 55,
            "PL_MAX_DISPLACEMENT_X": 500,
            "PL_MAX_DISPLACEMENT_Y": 500,
            "PL_ROUTABILITY_DRIVEN": True,
            #"PL_MACRO_HALO": "30 30",
            #"PL_MACRO_CHANNEL": "30 30",
            "FP_PDN_VPITCH": 30,
            "FP_PDN_HPITCH": 30,
            "FP_PDN_VOFFSET": 5,
            "FP_PDN_HOFFSET": 5,
            "FP_PDN_SKIPTRIM": False,
        },
        design_dir=".",
    )

    ## Starts the flow
    flow.start()

if __name__ == "__main__":
    main()
