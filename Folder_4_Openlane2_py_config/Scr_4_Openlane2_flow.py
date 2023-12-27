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
path = "/home/pominiq/projectfolder/"
os.chdir(path)

from openlane.flows import SequentialFlow, Flow
from openlane.steps import Verilator, Yosys, Misc, OpenROAD, Magic, Netgen, Checker
from openlane.steps.openroad import OpenGUI

class Openlane2Flow(SequentialFlow):
    Steps = [
        #Verilator.Lint,
        #Checker.LintTimingConstructs,
        #Checker.LintErrors,
        #Checker.LintWarnings,
        Yosys.Synthesis,
        Checker.YosysUnmappedCells,
        Checker.YosysSynthChecks,
        OpenROAD.CheckSDCFiles,
        OpenROAD.Floorplan,
        OpenROAD.CutRows,
        OpenROAD.TapEndcapInsertion,
        OpenROAD.IOPlacement,
        OpenROAD.GlobalPlacement,
        OpenROAD.RepairDesignPostGPL,
        OpenROAD.DetailedPlacement,
        OpenROAD.CTS,
        OpenROAD.ResizerTimingPostCTS,
        OpenROAD.GlobalRouting,
        OpenROAD.RepairDesignPostGRT,
        OpenROAD.GeneratePDN,
        OpenROAD.RepairAntennas,
        OpenROAD.DetailedRouting,
        OpenROAD.CheckAntennas,
        OpenROAD.FillInsertion,
        OpenROAD.IRDropReport,
        Magic.StreamOut,
        Magic.WriteLEF,
        Magic.DRC,
        Checker.MagicDRC,
        Magic.SpiceExtraction,
        Netgen.LVS,
        Checker.LVS,
        Yosys.EQY
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
        flow = Openlane2Flow(
            {
                "PDK": "sky130A",
                "DESIGN_NAME": "myproject",
                "VERILOG_FILES": "refg::$DESIGN_DIR/Folder_2_HLS4ML_Vivado_HLS/models/hls4ml_prj/myproject_prj/solution1/impl/verilog/*.v",
                "CLOCK_PORT": 'ap_clk',
                "CLOCK_PERIOD": 25,
                "RUN_HEURISTIC_DIODE_INSERTION": True,
                #### Yosys Synthesis specific parameters ###
                "USE_LIGHTER": False,
                "SYNTH_AUTONAME": False,
                "SYNTH_NO_FLAT": False,
                "SYNTH_SIZING": False,
                "SYNTH_ABC_BUFFERING": True,
                "SYNTH_SHARE_RESOURCES": True,
                "SYNTH_STRATEGY": "AREA 3",
                #### Floorplan specific parameters ###
                "FP_SIZING": "relative",
                #"DIE_AREA": [0, 0, 10000, 10000],
                "PL_TARGET_DENSITY_PCT": 50,
                "FP_CORE_UTIL": 30,
                "GPL_CELL_PADDING": 2,
                "PL_ROUTABILITY_DRIVEN": True,
                #"PL_BASIC_PLACEMENT": False, #Never run on large designs
                "PL_MAX_DISPLACEMENT_X": 500,
                "PL_MAX_DISPLACEMENT_Y": 500,
                "GRT_ALLOW_CONGESTION": False,
                "FP_PDN_VPITCH": 30,
                "FP_PDN_HPITCH": 30,
                "FP_PDN_VOFFSET": 5,
                "FP_PDN_HOFFSET": 5,
                "FP_PDN_SKIPTRIM": False,
                "PL_RESIZER_SETUP_SLACK_MARGIN": 0.4,
                "PL_RESIZER_HOLD_SLACK_MARGIN": 0.4,
                "GRT_RESIZER_SETUP_SLACK_MARGIN": 0.2,
                "GRT_RESIZER_HOLD_SLACK_MARGIN": 0.2,
                "MAGIC_DEF_LABELS": False,
                "HEURISTIC_ANTENNA_THRESHOLD": 110,
                "GRT_ANTENNA_ITERS": 5,
                "GRT_ADJUSTMENT": 0.2,
            },
            design_dir=".",
        )
        ## Starts the flow
        flow.start()

if __name__ == "__main__":
    main()
