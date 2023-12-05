%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
# Agenda dec 5 23

How to use Bambuu appimage

    - install 32-bit gcc compiler
        $ sudo apt-get install gcc-multilib
    
    - Use the ./bambu.appimage exeution as a replacement for the system-wide 'bambu' command
    



%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
# Agenda dec 2 23

Install dependencies for Panda/Bambuu: https://askubuntu.com/questions/1247962/how-to-install-gfortran-4-6-or-gcc-4-6-on-ubuntu-20-04

	I was able to meet my needs by simply adding the following lines to my /etc/apt
	sources.list file (based on the answer by N0rbert):

	deb http://archive.ubuntu.com/ubuntu trusty main restricted universe multiverse
	deb http://security.ubuntu.com/ubuntu trusty-security main restricted universe multiverse

	Then I could update and install gfortran-4.6 with:

	sudo apt-get update
	sudo apt-get install gfortran-4.6

	I now have both the most recent gfortran that is default for Ubuntu 20.04 alongside
	gfortran-4.6 and have not found any conflicts so far.


Scratch all that shit

Download dependencies:
    """
    sudo apt-get install gfortran autoconf autoconf-archive automake libtool g++ gcc clang libclang-dev libbdd-dev libboost-all-dev libmpc-dev libmpfr-dev libxml2-dev liblzma-dev libmpfi-dev zlib1g-dev libicu-dev bison doxygen flex graphviz iverilog verilator make libsuitesparse-dev libglpk-dev sollya gcc-multilib
    """

Download lsvm.sh:

    $ wget https://apt.llvm.org/llvm.sh
    $ chmod +x llvm.sh
    $ sudo ./llvm.sh all

Configure:
    sudo ../configure


%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
# Agenda dec 1 23

Research areas to look into

	- SODA syntheziser
	- PandA and Bambu (open-source HLS) Link: https://github.com/ferrandi/PandA-bambu
	- Survey of DNN acellaeratos from 29 nov https://arxiv.org/pdf/2311.17815.pdf






%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
# Agenda nov 29 23

Notes for presentation:
    - Have we tried a comically large die area? As the flow is a POC
    - Have we tried running Baungarden's design through OpenLane2, as to maybe deduce potential failings of current setup? As a comparison.
    - Future work on analog computing?
    - Look into multithreading more where possible.
    - Ask Ali Sahafi about the research questions and goals, as an additional evaluation.
    - How important is getting the physical layout really? (Should be reevaluated)
    - Get the story straight, and have this reflected really well.


NesterovSolve: Part of RePlAce Advancing Solution Quality and Routability Validation in Global Placement
https://ieeexplore.ieee.org/document/8418790
https://github.com/The-OpenROAD-Project/OpenROAD/blob/master/src/gpl/README.md




%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
# Agenda nov 28 23
Har fået GUI til at virke
    Man kan meget simplet "openroad -gui" i openlane2 og så åbne .odb fil.
    Her kan man tjekke heatmap etc.

Det er vidst også muligt kun at køre enkelte steps, men jeg har ikke fået det til at virke endnu

Jeg prøver lidt af hvert her, men viser sig classic flow ikke virker? men SequentialFlow virker fint



%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
# Agenda nov 27 23

Loading the design configuration file has generated the config.py:612
           following warnings:                                                  
           ⚠️   The configuration variable 'GRT_REPAIR_ANTENNAS' is config.py:616
           deprecated. Please check the docs for the usage on the               
           replacement variable 'RUN_ANTENNA_REPAIR'.                           
           ⚠️   The configuration variable 'SYNTH_BUFFERING' is     config.py:616
           deprecated. Please check the docs for the usage on the               
           replacement variable 'SYNTH_ABC_BUFFERING'.                          
           ⚠️   The configuration variable 'GRT_ANT_ITERS' is       config.py:616
           deprecated. Please check the docs for the usage on the               
           replacement variable 'GRT_ANTENNA_ITERS'.                            
           ⚠️   The configuration variable                          config.py:616
           'GLB_RESIZER_HOLD_SLACK_MARGIN' is deprecated. Please                
           check the docs for the usage on the replacement                      
           variable 'GRT_RESIZER_HOLD_SLACK_MARGIN'.                            
           ⚠️   The configuration variable                          config.py:616
           'GLB_RESIZER_SETUP_SLACK_MARGIN' is deprecated. Please               
           check the docs for the usage on the replacement                      
           variable 'GRT_RESIZER_SETUP_SLACK_MARGIN'.                           
           Starting a new run of the 'Classic' flow with the tag     flow.py:529
           'RUN_2023-11-28_13-42-10'.                                           
           Starting…     

[INFO GRT-0096] Final congestion report:
Layer         Resource        Demand        Usage (%)    Max H / Max V / Total 
Overflow
--------------------------------------------------------------------------------
-------
li1                  0             0            0.00%             0 /  0 /  0
met1           3774540        938022           24.85%             0 /  0 /  0
met2           3976808       1023311           25.73%             0 /  0 /  0
met3           2634904         49034            1.86%             0 /  0 /  0
met4           1138210         32774            2.88%             0 /  0 /  0
met5            279174            32            0.01%             0 /  0 /  0
--------------------------------------------------------------------------------
-------
Total         11803636       2043173           17.31%             0 /  0 /  0

[INFO GRT-0018] Total wirelength: 21355679 um
[INFO GRT-0014] Routed nets: 362062





%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
# Agenda nov 26 23

Getting an overview: 1/2 of project period completed

Research goals and methods:

# 1. Design template NN algorithm. For this Python will be used, with known machine learning library TensorFlow.

## Achieved: 
I have used TensorFlow (by extension Keras), to create a simple CNN with MNIST dataset. This algorithm has been compressed with conventional compression techniques (maxpooling, flattening, fix to 16-bit float), as to minimize its size while keeping a relatively high accuracy (>95%). The reason for choice of CNN is due to the Wireless Capsule Endoscopy designs use of 2D picture recognition.


# 2. Convert NN algorithm to digital circuit design. For this insights from literature on NN accelerators, NN on FPGA design, software suites, and expert advice will be used.

## Achieved (but can be altered):
I have used HLS4ML (an open-source flow for high-level synthesis of machine learning algorithms) to generate a Verilog-file (and VHDL-file) from a TensorFlow model. HLS4ML utilises Vivado HLS WebPack as the back-bone for this convertion, by way of converting from Python --> C++ (HLS) --> Verilog/VHDL.

HLS4ML allows for testing NN model on FPGA bit-stream, thus (some) level of evaluation of accuracy and crossentropy loss before conversion. It also allows for digital design specific parameters, such as adjusting reuse factor of DSPs (ie. multipliers) thus leading to a trade-off between size and latency.

Todo:
    - Reporting co-simulation

# 3. Choice of open source PDK. The most promising is Skywater Technology’s sky130 PDK, as it is used by Google Silicon and will be the first option.

## Achieved:
Sky130A is specifically the best supported PDK. PDKs of smaller sizes exist, but are purely for experimental and theoretical use (thus cannot be produced as of writing). GDK180 is also a suitable choice, but for in this context size was prioritised.


# 4. Build circuitry on selected platform and technology. For this some of the aforementiooned automation tools in the prior works section might come into play. Otherwise a custom approach will have to be developed, if not done manually.

## Work in progress
As of writing; The most promising method of converting the TensorFlow Verilog-project to a hardened design (ie. silicon design using sky130) is using the OpenRoad project's tool set. OpenRoad is a suite of open-source software for synthesis, floorplanning, placement, clock-tree synthesis, routing and finishing a given Verilog-project to a final GDSII layout.
OpenRoad allows complete automation, as well as manual adjustments in a graphics interface.

For integration with Python, OpenLane2 has a useful API as well as a low memory install, and has been the primary flow used in the experimentation.

Current status is that it is possible to synthesis, floorplan and make placements of components in OpenLane2, but I currently meet problems pertaining to

    - Routing congestion.
    - Computing power, meaning that it takes several hours / days to run the flow (not a unique problem).
    - OpenLane2 runs great, but OpenRoad installation requires a lot of trouble shooting from my side to run as expected (not a unique problem).

## Interesting development
I watched a seminar and have researched the github of researcher Emilio Baungarten and he has literaly managed to use OpenLane 1, to synthesis a CNN model to a layout on sky130 technology. As such, IT IS POSSIBLE lol.


# Conclusion

I am 1 month behind schedule. Overall this means I am currently eating into my 7 week buffer period (I was scared this would happen).

Things to work on:
    1. Fix OpenRoad installation: This would allow for (uninterrupted) complete manual look into the OpenLane 1&2 and flow-scripts workings, hopefully allowing for addressing the network congestion issue.
    2. Mr. Baungarten uses the GDK180 PDK in his project. Maybe I should try the same?
    3. HLS4ML has reporting capabilities which I have yet to implement completely! Would be amazing to have.



%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
# Agenda nov 25 23

Things on the agenda:
## Task 1
    - Installing OpenRoad (lol is harder then previously thought)
        Got it installed, though had some dependency issues, but were fixed by manually installing some dependencies with apt (incl. doxygen etc.), though could still not built it without error.
        After applying the following git commands it worked like a charm

            git checkout master
            git pull
            git submodule init
            git submodule update
            git submodule sync
            git clean -xdi
            ./etc/Build.sh
## Task 2
    - Running flow with a PL_MAX_DISPLACEMENT, hoping it might fix the congestion problem (using value "2000"). Also increased GRT adjustment slightly (will make it worse, but hopefully take less time), and switched strategy to DELAY_0 just to try. 
            
            SYNTH_STRATEGY": "DELAY 0",
            "FP_SIZING": "relative",
            #"DIE_AREA": [0, 0, 4000, 4000],
            "GRT_ADJUSTMENT": 0.23,
            "PL_TARGET_DENSITY_PCT": 51,
            "PL_MAX_DISPLACEMENT_X": 2000,
            "PL_MAX_DISPLACEMENT_Y": 2000,

    - 



%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
# Agenda nov 22 23

Result of the 8 hour compiling time was still congestion. Thus I might not be able to avoid a manual approach



%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
# Agenda nov 21 23

Det er muligt at bruge 
	
	openroad -gui and load respective def file from runs/xxx/tmp/placement/xxx.def
	
	in the openroad-flow-scripts we have a gui target for each stage but I guess OL does not.
	One needs to install OpenRoad to check the GUI. 

# Addressing congestion
Tilføjet endnu en config setting
		"PL_MAX_DISPLACEMENT_X": 500,
                "PL_MAX_DISPLACEMENT_Y": 500,

user Maliberty writes it will slow down the placement, but for smaller designs it can be fine.

Another suggestion:
	Setting a lower PL_TARGET_DENSITY reduces congestion for the routing. 
	Thus ensuring area is the limiting factor





%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
# Agenda nov 18 23

Har fikset problemet med at køre OpenLane2 på laptop. Problemet var:

    - Størrelse, kan fikses ved at increase reusefactor (significanly decreases size of entire circuit and amount of connections thus allows for flow to run on sub-optimal hardware)
    - fikset PDK på laptop.
    - Problems with congestion. Have included command for MACRO_HALO, hoping it can fix the issue. Alternatively larger distances should reduce congestion.
    - There is a YouTube video
        https://www.youtube.com/watch?v=NuFJLy9ywVg
      With tutorial on how to use OpenROAD GUI, to check for congestion,
      Process for addressing congestion is shown in github issue
        https://github.com/The-OpenROAD-Project/OpenROAD-flow-scripts/issues/173

    - For recreation; RF32 with DELAY_4.
    - Last run of the day: RF32 with DELAY_0 and MACRO config adjustments (no macros so no use)

# Problem 1
Ved ikke om det er et "macro" problem, da jeg ikke ved hvad en macro er, bør undersøges

Conclusion:
Made it a lot further today. It is a lot closer to first succesful NN.

From github
    I verified this with 4 different designs (includes designs with fakerams, realrams and synthesized rams) that were facing this issue previously and I can confirm that removing set_macro_extension 1 is solving this congestion issue. Could you share what exactly is the purpose of this parameter, is it used to create blockages around the macros for some purpose?

    I had tried to push quite a few different designs with sky130 SRAMs through the flow but in almost all cases (all major cases) the flow failed with congestion too high error. Only some smaller designs like tinyRocket and Serv passed the flow before this fix (and that was by adjusting the MACRO_PLACE_CHANNEL).
    Before the fix, I had tried several different things, like:

        Macro pin spacing
        Macro pin width
        Macro Halo (spacing between standard cells and macro)
        Macro channel (spacing between macros)
        Place density
        Utilization / Core area
        Tried fake and real SRAMs
        Manual orientation of macros.
        Manually placing just 4 macros per row spaced out maximally (Image below)
        Reducing design I/O by cutting down top levels
        Increasing the power grid spacing (Image below)
        And more
        But none had solved this congestion issue.

    I have tested this fix on the BlackParrot front end design too and it passes the flow.


%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
# Agenda nov 14 23
Fik fikset mine problemer med at teste bit-stream version af NN (tak Jonas). Gennemtjekkede dependencies for hls4ml igen, siden jeg har problemer med succesfuldt at synthesis et verilog-projekt, men dependencies er allerede up-to-snuff (fuck). 

I dag:
    - Leg med parameter, såsom io_parallel 


# Conclusion for i dag
HlS4ML virker, MNIST model med pruning virker, og den converter succesfuldt.
OpenLane2 fungerer på gaming pc, og kan kører mere af flowet igennem, end laptop pga. mere memory

    - Openlane 2 kræver meget memory, som hverken min laptop eller gaming PC kan håndterer.
    - DTU HPC er noget skrald at bruge, må spørge nogen om jeg kan få adgang evt.
    - Alternativt skal jeg lave NN infitisimalt.
    - 

# Dagens sidste kørsel
Jeg har lavet en config med reuse_factor 64, på den 16-bit optimerede model. Måske implementér weight optimisation. Prøver også lidt forskellige SYNTH_STRATEGY, men DELAY 4 lader altid til at komme længst, selv i optimeringsstadier før synthesis.

Nu fik jeg en permission error i en yosys.json fil? Fucking hell.




%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
# Agenda nov 13 23

github token:        

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

Expires on Sat, Mar 30 2024. 

Terminal freezes when reaching Verilog-2005 stage, but atleast the ABC execution works. Trying different synthesis strategies, hoping it might help.

Current config for openlane2
        {
            "PDK": "sky130A",
            "DESIGN_NAME": "myproject",
            "VERILOG_FILES": "refg::$DESIGN_DIR/pynq_working_model/hls4ml_prj/myproject_prj/solution1/impl/verilog/*.v",
            "CLOCK_PORT": 'ap_clk',
            "CLOCK_PERIOD": 10,
            "USE_LIGHTER": True, # Takes care of timing issues
            "SYNTH_AUTONAME": True, # No idea if effects results
            "SYNTH_NO_FLAT": True, # Makes the flow continue beyond ABC stage
            "SYNTH_SIZING": True,
            "SYNTH_STRATEGY": "DELAY 4", # Makes the flow continue further
            "FP_SIZING": "relative",
            #"DIE_AREA": [0, 0, 20100, 20100],
            "FP_PDN_VPITCH": 30,
            "FP_PDN_HPITCH": 30,
            "FP_PDN_VOFFSET": 5,
            "FP_PDN_HOFFSET": 5,
            "FP_PDN_SKIPTRIM": True,
        },

When I do not flat before 
"A flag that disables flattening the hierarchy during synthesis, only flattening it after synthesis, mapping and optimizations.",
I get further, then when I do.

# Today's RUN 2
Now we pass the verilog 2005 stage! but fail on the flattening stage post synthesis, mapping and optimisation. Not sure if it is a memory issue?

# Today's RUN 3
Bruger for mange resourcer på min pc, fucker op når pc løber tør for RAM

# Forsøg på at fixe
Kiggede AI by AI igennem igen, for at se hvordan han lavede sit NN. 666 params med 96% accuracy kun med relu activation. Konkluderede heraf bare at kopier hans setup, og prøve at køre det igennem HLS4ML. Hvilket har ført til problemer med predict() igen, og den fejler når den builder.

Skal nok bare prøve at reninstallerer dependencies og opsætte et virtual environment. Fucking shit.








%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
# Agenda nov 9 23

Reinstalled volare (from Efabless) and sky130 (from Google). Links below:

https://github.com/efabless/volare#installation-and-upgrades
https://github.com/google/skywater-pdk

Terminal output:

    pominiq@Lenovo-ideapad-510S-14IKB:~$ volare ls --pdk sky130
    In /home/pominiq/.volare/volare/sky130/versions:
    └── dd7771c384ed36b91a25e9f8b314355fc26561be (2023.09.14) (enabled)

Verifies that the PDK is enabled.
Btw it was a long installation of skywater-pdk where all the modules where confirmed, so it might work now?

Found a good openlane config

    https://cornell-c2s2.github.io/ece5745_sec7/

## PROBLEM 1 and answer
Had a lot of problems with TIMING in yosys, but applying the option "USE_LIGHTER = TRUE" in flow apparently fixed it? Like what. It is an optimisation stage. There was also a problem with truncation of bits, but this also disapared after enabling it.


%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
# Agenda nov 6 23

I dags objective

    : Port min flow til min stationær.
    -- Hvordan port man Python programme til en anden computer?

## Svært at porte, men openlane2 fungerer på min pc.

Kunne kører det meste af flow igennem på laptop ved at skifte FPGA technology fra Pynq til alveo-u280 (part: xcu280-fsvh2892-2L-e).
Der er en fejl ved Global Placement phase, hvor den ikke kan finde components

    [WARNING STA-0376] cell 'sky130_fd_sc_hd__a2111oi_0' not found.
    [WARNING STA-0376] cell 'sky130_fd_sc_hd__a21boi_0' not found.
    [WARNING STA-0376] cell 'sky130_fd_sc_hd__and2_0' not found.
    [WARNING STA-0376] cell 'sky130_fd_sc_hd__buf_16' not found.
    [WARNING STA-0376] cell 'sky130_fd_sc_hd__clkdlybuf4s15_1' not 

Indikerer at STD_CELL_LIBRARY ikke er korrekt indstillet, for umiddelbart er alle components for sky130A i path:.volare/sky130A

En der fandt en potentiel løsning:
https://github.com/efabless/openlane2/issues/93
Har lavet ændringerne i AYAM_3, men det tager for lang tid at køre, til at gøre nu i aften.

Prøv at smide WARNING STA-0376 ind i github openlane2 issues.

Hele traceback for Global Placement stage
"""
────────────────────── Global Placement ────────────────────────
[22:11:37] ⚠️   'PL_TARGET_DENSITY_PCT' not        openroad.py:837
           explicitly set, using dynamically                     
           calculated target density: 60…                        
Reading OpenROAD database at 
'/home/pominiq/ProjectFolder/runs/RUN_2023-11-06_21-04-11/06-open
road-ioplacement/myproject.odb'…
Reading library file at 
'/home/pominiq/ProjectFolder/runs/RUN_2023-11-06_21-04-11/tmp/43d
5d0c4354b4485b6f76adac85ffb9f.lib'…
Reading design constraints file at 
'/nix/store/d49mgz9c1cjf98xlagsv72lbvcsfnpni-python3-3.10.9-env/l
ib/python3.10/site-packages/openlane/scripts/base.sdc'…
[INFO] Using clock ap_clk…
[INFO] Setting output delay to: 2
[INFO] Setting input delay to: 2
[INFO] Setting load to: 0.033442
[INFO] Setting clock uncertainty to: 0.25
[INFO] Setting clock transition to: 
0.1499999999999999944488848768742172978818416595458984375
[INFO] Setting timing derate to: 5%
[WARNING STA-0376] cell 'sky130_fd_sc_hd__a2111oi_0' not found.
[WARNING STA-0376] cell 'sky130_fd_sc_hd__a21boi_0' not found.
[WARNING STA-0376] cell 'sky130_fd_sc_hd__and2_0' not found.
[WARNING STA-0376] cell 'sky130_fd_sc_hd__buf_16' not found.
[WARNING STA-0376] cell 'sky130_fd_sc_hd__clkdlybuf4s15_1' not 
found.
[WARNING STA-0376] cell 'sky130_fd_sc_hd__clkdlybuf4s18_1' not 
found.
[WARNING STA-0376] cell 'sky130_fd_sc_hd__fa_4' not found.
[WARNING STA-0376] cell 'sky130_fd_sc_hd__lpflow_bleeder_1' not 
found.
[WARNING STA-0376] cell 'sky130_fd_sc_hd__lpflow_clkbufkapwr_1' 
not found.
[WARNING STA-0376] cell 'sky130_fd_sc_hd__lpflow_clkbufkapwr_16' 
not found.
[WARNING STA-0376] cell 'sky130_fd_sc_hd__lpflow_clkbufkapwr_2' 
not found.
[WARNING STA-0376] cell 'sky130_fd_sc_hd__lpflow_clkbufkapwr_4' 
not found.
[WARNING STA-0376] cell 'sky130_fd_sc_hd__lpflow_clkbufkapwr_8' 
not found.
[WARNING STA-0376] cell 'sky130_fd_sc_hd__lpflow_clkinvkapwr_1' 
not found.
[WARNING STA-0376] cell 'sky130_fd_sc_hd__lpflow_clkinvkapwr_16' 
not found.
[WARNING STA-0376] cell 'sky130_fd_sc_hd__lpflow_clkinvkapwr_2' 
not found.
[WARNING STA-0376] cell 'sky130_fd_sc_hd__lpflow_clkinvkapwr_4' 
not found.
[WARNING STA-0376] cell 'sky130_fd_sc_hd__lpflow_clkinvkapwr_8' 
not found.
[WARNING STA-0376] cell 'sky130_fd_sc_hd__lpflow_decapkapwr_12' 
not found.
[WARNING STA-0376] cell 'sky130_fd_sc_hd__lpflow_decapkapwr_3' 
not found.
[WARNING STA-0376] cell 'sky130_fd_sc_hd__lpflow_decapkapwr_4' 
not found.
[WARNING STA-0376] cell 'sky130_fd_sc_hd__lpflow_decapkapwr_6' 
not found.
[WARNING STA-0376] cell 'sky130_fd_sc_hd__lpflow_decapkapwr_8' 
not found.
[WARNING STA-0376] cell 'sky130_fd_sc_hd__lpflow_inputiso0n_1' 
not found.
[WARNING STA-0376] cell 'sky130_fd_sc_hd__lpflow_inputiso0p_1' 
not found.
[WARNING STA-0376] cell 'sky130_fd_sc_hd__lpflow_inputiso1n_1' 
not found.
[WARNING STA-0376] cell 'sky130_fd_sc_hd__lpflow_inputiso1p_1' 
not found.
[WARNING STA-0376] cell 'sky130_fd_sc_hd__lpflow_inputisolatch_1'
not found.
[WARNING STA-0376] cell 'sky130_fd_sc_hd__lpflow_isobufsrc_1' not
found.
[WARNING STA-0376] cell 'sky130_fd_sc_hd__lpflow_isobufsrc_16' 
not found.
[WARNING STA-0376] cell 'sky130_fd_sc_hd__lpflow_isobufsrc_2' not
found.
[WARNING STA-0376] cell 'sky130_fd_sc_hd__lpflow_isobufsrc_4' not
found.
[WARNING STA-0376] cell 'sky130_fd_sc_hd__lpflow_isobufsrc_8' not
found.
[WARNING STA-0376] cell 
'sky130_fd_sc_hd__lpflow_isobufsrckapwr_16' not found.
[WARNING STA-0376] cell 
'sky130_fd_sc_hd__lpflow_lsbuf_lh_hl_isowell_tap_1' not found.
[WARNING STA-0376] cell 
'sky130_fd_sc_hd__lpflow_lsbuf_lh_hl_isowell_tap_2' not found.
[WARNING STA-0376] cell 
'sky130_fd_sc_hd__lpflow_lsbuf_lh_hl_isowell_tap_4' not found.
[WARNING STA-0376] cell 
'sky130_fd_sc_hd__lpflow_lsbuf_lh_isowell_4' not found.
[WARNING STA-0376] cell 
'sky130_fd_sc_hd__lpflow_lsbuf_lh_isowell_tap_1' not found.
[WARNING STA-0376] cell 
'sky130_fd_sc_hd__lpflow_lsbuf_lh_isowell_tap_2' not found.
[WARNING STA-0376] cell 
'sky130_fd_sc_hd__lpflow_lsbuf_lh_isowell_tap_4' not found.
[WARNING STA-0376] cell 'sky130_fd_sc_hd__mux4_4' not found.
[WARNING STA-0376] cell 'sky130_fd_sc_hd__o21ai_0' not found.
[WARNING STA-0376] cell 'sky130_fd_sc_hd__o311ai_0' not found.
[WARNING STA-0376] cell 'sky130_fd_sc_hd__or2_0' not found.
[WARNING STA-0376] cell 'sky130_fd_sc_hd__probe_p_8' not found.
[WARNING STA-0376] cell 'sky130_fd_sc_hd__probec_p_8' not found.
[WARNING STA-0376] cell 'sky130_fd_sc_hd__xor3_1' not found.
[WARNING STA-0376] cell 'sky130_fd_sc_hd__xor3_2' not found.
[WARNING STA-0376] cell 'sky130_fd_sc_hd__xor3_4' not found.
[WARNING STA-0376] cell 'sky130_fd_sc_hd__xnor3_1' not found.
[WARNING STA-0376] cell 'sky130_fd_sc_hd__xnor3_2' not found.
[WARNING STA-0376] cell 'sky130_fd_sc_hd__xnor3_4' not found.
[INFO] Setting RC values…
[INFO] Setting signal min routing layer to: met1 and clock min 
routing layer to met1.
[INFO] Setting signal max routing layer to: met5 and clock max 
routing layer to met5.
[INFO GPL-0002] DBU: 1000
[INFO GPL-0003] SiteSize: 460 2720
[INFO GPL-0004] CoreAreaLxLy: 5520 10880
[INFO GPL-0005] CoreAreaUxUy: 194120 187680
[INFO GPL-0006] NumInstances: 545593
[INFO GPL-0007] NumPlaceInstances: 544994
[INFO GPL-0008] NumFixedInstances: 599
[INFO GPL-0009] NumDummyInstances: 0
[INFO GPL-0010] NumNets: 545026
[INFO GPL-0011] NumPins: 1800520
[INFO GPL-0012] DieAreaLxLy: 0 0
[INFO GPL-0013] DieAreaUxUy: 200000 200000
[INFO GPL-0014] CoreAreaLxLy: 5520 10880
[INFO GPL-0015] CoreAreaUxUy: 194120 187680
[INFO GPL-0016] CoreArea: 33344480000
[INFO GPL-0017] NonPlaceInstsArea: 1074780800
[INFO GPL-0018] PlaceInstsArea: 5764259632000
[INFO GPL-0019] Util(%): 17862.76
[INFO GPL-0020] StdInstsArea: 5764259632000
[INFO GPL-0021] MacroInstsArea: 0
[ERROR GPL-0301] Utilization exceeds 100%.
Error: gpl.tcl, 67 GPL-0301
[22:11:43] ❌  [INFO GPL-0015] CoreAreaUxUy: 194120   step.py:949
           187680                                                
           [INFO GPL-0016] CoreArea: 33344480000                 
           [INFO GPL-0017] NonPlaceInstsArea:                    
           1074780800                                            
           [INFO GPL-0018] PlaceInstsArea:                       
           5764259632000                                         
           [INFO GPL-0019] Util(%): 17862.76                     
           [INFO GPL-0020] StdInstsArea:                         
           5764259632000                                         
           [INFO GPL-0021] MacroInstsArea: 0                     
           [ERROR GPL-0301] Utilization exceeds 100%.            
           Error: gpl.tcl, 67 GPL-0301                           
                                                                 
           ❌  Log file:                              step.py:950
           'runs/RUN_2023-11-06_21-04-11/07-openroad-            
           globalplacement/openroad-globalplacement.l            
           og'                                                   
Traceback (most recent call last):
  File 
"/nix/store/d49mgz9c1cjf98xlagsv72lbvcsfnpni-python3-3.10.9-env/l
ib/python3.10/site-packages/openlane/steps/step.py", line 768, in
start
    views_updates, metrics_updates = self.run(state_in_result, 
**kwargs)
  File 
"/nix/store/d49mgz9c1cjf98xlagsv72lbvcsfnpni-python3-3.10.9-env/l
ib/python3.10/site-packages/openlane/steps/openroad.py", line 
840, in run
    return super().run(state_in, env=env, **kwargs)
  File 
"/nix/store/d49mgz9c1cjf98xlagsv72lbvcsfnpni-python3-3.10.9-env/l
ib/python3.10/site-packages/openlane/steps/openroad.py", line 
263, in run
    views_updates, metrics_updates = super().run(state_in, 
env=env, **kwargs)
  File 
"/nix/store/d49mgz9c1cjf98xlagsv72lbvcsfnpni-python3-3.10.9-env/l
ib/python3.10/site-packages/openlane/steps/tclstep.py", line 193,
in run
    generated_metrics = self.run_subprocess(
  File 
"/nix/store/d49mgz9c1cjf98xlagsv72lbvcsfnpni-python3-3.10.9-env/l
ib/python3.10/site-packages/openlane/steps/step.py", line 951, in
run_subprocess
    raise subprocess.CalledProcessError(returncode, process.args)
subprocess.CalledProcessError: Command '['openroad', '-exit', 
'-no_splash', '-metrics', 
'/home/pominiq/ProjectFolder/runs/RUN_2023-11-06_21-04-11/07-open
road-globalplacement/or_metrics_out.json', 
'/nix/store/d49mgz9c1cjf98xlagsv72lbvcsfnpni-python3-3.10.9-env/l
ib/python3.10/site-packages/openlane/scripts/openroad/gpl.tcl']' 
returned non-zero exit status 1.

During handling of the above exception, another exception 
occurred:

Traceback (most recent call last):
  File 
"/nix/store/d49mgz9c1cjf98xlagsv72lbvcsfnpni-python3-3.10.9-env/l
ib/python3.10/site-packages/openlane/flows/sequential.py", line 
276, in run
    current_state = step.start(
  File 
"/nix/store/d49mgz9c1cjf98xlagsv72lbvcsfnpni-python3-3.10.9-env/l
ib/python3.10/site-packages/openlane/steps/step.py", line 775, in
start
    raise StepError(f"{self.name}: subprocess {e.args} failed")
openlane.steps.step.StepError: Global Placement: subprocess (1, 
['openroad', '-exit', '-no_splash', '-metrics', 
'/home/pominiq/ProjectFolder/runs/RUN_2023-11-06_21-04-11/07-open
road-globalplacement/or_metrics_out.json', 
'/nix/store/d49mgz9c1cjf98xlagsv72lbvcsfnpni-python3-3.10.9-env/l
ib/python3.10/site-packages/openlane/scripts/openroad/gpl.tcl']) 
failed

During handling of the above exception, another exception 
occurred:

Traceback (most recent call last):
  File "/home/pominiq/ProjectFolder/AYAM_3_Openlane2-flow.py", 
line 79, in <module>
    main()
  File "/home/pominiq/ProjectFolder/AYAM_3_Openlane2-flow.py", 
line 75, in main
    flow.start()
  File 
"/nix/store/d49mgz9c1cjf98xlagsv72lbvcsfnpni-python3-3.10.9-env/l
ib/python3.10/site-packages/openlane/flows/flow.py", line 553, in
start
    final_state, step_objects = self.run(
  File 
"/nix/store/d49mgz9c1cjf98xlagsv72lbvcsfnpni-python3-3.10.9-env/l
ib/python3.10/site-packages/openlane/flows/sequential.py", line 
285, in run
    raise FlowError(str(e))
openlane.flows.flow.FlowError: Global Placement: subprocess (1, 
['openroad', '-exit', '-no_splash', '-metrics', 
'/home/pominiq/ProjectFolder/runs/RUN_2023-11-06_21-04-11/07-open
road-globalplacement/or_metrics_out.json', 
'/nix/store/d49mgz9c1cjf98xlagsv72lbvcsfnpni-python3-3.10.9-env/l
ib/python3.10/site-packages/openlane/scripts/openroad/gpl.tcl']) 
failed
OpenLane2Flow - Stage 7 - Global Placement ━━━╺━━━━  6/15 1:07:31



%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
# Agenda nov 4 23

Bug i AYAM_2


  y_pred_sum = y_pred.sum(axis=1)
    if not np.isclose(y_pred_sum, 1, rtol=1e-15, atol=5 * eps).all():
        warnings.warn(
            (
#                "The y_pred values do not sum to one. Starting from 1.5 this"
#                "will result in an error."
            ),
            UserWarning,

Skal finde en måde at teste normaliseringen og sum af y_pred (i dette tilfælde y_hls).

        # For Accuracy, y_hls is reduced from multi-class array to single value of class with highest probability
        print(np.argmax(y_hls, axis=1).sum())
        hls_accuracy = accuracy_score(y_test, np.argmax(y_hls, axis=1))


OG DESUDEN

kan jeg ikke køre test, den crasher når den skal performe ABC.


%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
# Agenda nov 3 23

'KerasMNISTmodel.py' og 'HLS4ML_Keras2Verilog' virker som forventet

Mangler:
    - At lave 'HLS4ML_Keras2Verilog'-output til format compatible med OpenLane2.
    - TCL? JSON???

Jeg er seriøst irriteret. For at inkluderer multiple verilog files til et projekt skal man bruge syntaks

    flow = OpenLane2Flow(
        {
            "PDK": "sky130A",
            "DESIGN_NAME": "myproject",
            "VERILOG_FILES": "refg::$DESIGN_DIR/src/*.v",
        ......

Jeg kom til at inkluderer blok parentes [] om udtrykket, hvilket fyldte et index af et array med alle filerne, i stedet for at de blev naturligt fordelt *facepalm*

I dag er første forsøg på at køre flow.

### Nuværende flow:
            **  



%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
# Agenda oct 31 23

'KerasMNISTmodel.py' og 'HLS4ML_Keras2Verilog' virker som forventet

Mangler:
    - At lave 'HLS4ML_Keras2Verilog'-output til format compatible med OpenLane2.
    - TCL? JSON???





%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
# Agenda oct 27 23

Note: Har fixet yaml.dump problemet med følgende chat

https://chat.openai.com/share/09846ae4-1046-4f36-be42-25a2d4518845

        with open(model.config.get_output_dir() + '/' + config_filename, 'w') as file:
            yaml_content = f"config: {model.config.config}\n"
            file.write(yaml_content)

Note: Mangler i HLS4ML

    - Visualisering (Tjek)
    - Compile af bit-stream ver. af Keras model (Tjek) ((Finally))
    
    - Accuracy and loss comparison (tjek)

            -- Fiksede dette ved at bruge sklearn functions. Måtte convert lidt i data (fra multi-class til et statisk tal for Accuracy), og fjerne noget dummy data for at udregne cross-entropy loss (hvor kommer de 2 ekstra classes fra?), og jeg måtte simpelthen bare "remove" de sidste 2 classes bag på 'y_hls'.
            Jeg er ikke sikker på om dette vil være gældende for alle CNN med multiclass predictions? Om jeg skal tage højde for forskellige ting?

    - Simulations resultater i build (fuuck)

Note: Mangler i OpenLane2

    - Indsæt tcl / json for at harden hele projektet genereret af Keras2Verilog (mangler at teste)

### Conclusion:
Nu virker HLS4ML, så er det kun at verificerer med de forskellige Vivado simulationer!
Jeg tror det næste på listen dog er at få OpenLane2 til at accepterer formattet, fordi så er det bare totalt awesome -> complete pipeline.

Link til at tilføje designs fra multiple files
https://openlane.readthedocs.io/en/latest/usage/designs.html#adding-your-designs

En ekstra opgave ville være at visualiserer data (over time eksempelvis). Og at prøve at bruge en endnu større YOLO-NN model, og se hvad der sker.





%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
# Agenda oct 25 23

Fik godkendt at min approach er god nok, og det var synd med at nogle fik det påvist før mig, men det er fint. Vi skal demonstrere at vi er ingeniører og så skal vi bruge vores nyfundne tid på at arbejde på det som adskiller os.





%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
# Agenda oct 24 23

Note: Mangler i HLS4ML

    - Visualisering (Tjek)
    - Compile af bit-stream ver. af Keras model (FUUCK)
    - Accuracy comparison (FUUCK)
    - Simulations resultater i build (FUUCK)

Note: Mangler i OpenLane2

    - Indsæt tcl / json for at harden hele projektet genereret af Keras2Verilog (mangler at teste)

Opsummering for i dag:
Damn... Jeg har forsøgt at fikse 

    "TypeError: cannot pickle 'weakref.ReferenceType' object"

Men shit, det er bare ikke nemt. Lader til evt. at have at gøre med yaml.dump(), men config filen burde være fin nok, da det er fra hls_model.config.config, hvilket er ganske normalle parametre der burde kunne representeres som en yaml-file, men der er noget her. Der skal være en løsning.

I test script

    import yaml
    
    config_filename = 'hls4ml_config.yml'
    
    with open(hls_model.config.get_output_dir() + '/' + config_filename, 'w') as file:
    
        yaml.dump(data=hls_model.config.config, stream=file)

Produceres samme fejl.





%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
# Agenda oct 23 23

Note:
For at finde .cpp-file genereret af HLS4ML kan man kigge inde under "/firmware/.." i project-folder.

### TILFØJELSER

### Problem 2:
Nyt problem relateret til at teste hls4ml-version af NN-modellen; YAML pakken giver en AttributeError relateret til

        if function.__name__ == '__newobj__':
    AttributeError: 'functools.partial' object has no attribute '__name__'. Did you mean: '__ne__'?

Og dette er umiddelbart baseret på en hurtig søgning en fejl andre har haft, men med hensyn til 'Pandas'.

### Løsning 2:
Har ændret en section i 'representer.py' i YAML-library for at undgå en TypeError relateret til navn:

        #if function.__name__ == '__newobj__':
        #    function = args[0]
        #    args = args[1:]
        #    tag = 'tag:yaml.org,2002:python/object/new:'
        #    newobj = True
        #else:
        tag = 'tag:yaml.org,2002:python/object/apply:'
        newobj = False
        function_name = '%s.%s' % (function.__module__,function.__name__)

til

        #if function.__name__ == '__newobj__':
        #    function = args[0]
        #    args = args[1:]
        #    tag = 'tag:yaml.org,2002:python/object/new:'
        #    newobj = True
        #else:
        tag = 'tag:yaml.org,2002:python/object/apply:'
        newobj = False
        function_name = '%s' % (function.__module__)

Da det kun er filnavn relateret, burde dette ikke være så vigtigt.
Men uden dette modul kan man ikke lave predictions på hls_config (ie. kan ikke lave en test-bench og comparison)


### Baseret på problem 3
Jeg har gjort NN modellen half-float, og med relu (linear) activation, samt ReuseFactor = 4, i håb om at det simplificerede modellen lidt, aka. giver hurtigere compile tid i Vivado.

    - Det ligner faktisk, at det virker... ikke. Den fejler samme sted; Efter [HLS 200-111], med de nye indstillinger går der tilgengæld ikke lige så langt tid, før vi når der til.
    For at beskrive dens opførsel: Den stopper faktisk bare fuldstændig (altså Vivado HLS) med at udfører nogen r/w operationer, det er ikke Vivado der meddeler en fejl.

### Løsning 3
Jeg skruede ReuseFactor op til 16, og hard-codede 16 bit float, og nu virker det. Lader til der er ekstra indstillinger relateret til forskellige simuleringer; Må være det næste på listen.

For at inkluderer alt dette i et projekt skal jeg i følge openlane docs

"VERILOG_FILES
    The path of the design’s Verilog files, provided as an array of files in JSON or a whitespace-delimited list of files in Tcl. The files are evaluated in order, i.e., if file B depends on file A, file A must be listed first."

Og så burde jeg kunne importerer og så harden mit design.


### Problem 3
Visualisering

### Løsning 3
Virkede efter at 

    pip install pydot
    pip install pydotplus
    pip install graphviz

Så kunne linjen     hls4ml.utils.plot_model(hls_model, show_shapes=True, show_precision=True, to_file=None)
kører. Ved dog ikke hvordan jeg ser visualiseringen.


-------------------------------------------------
### Problem 2:
Nyt problem relateret til at teste hls4ml-version af NN-modellen; YAML pakken giver en AttributeError relateret til

        if function.__name__ == '__newobj__':
    AttributeError: 'functools.partial' object has no attribute '__name__'. Did you mean: '__ne__'?

Og dette er umiddelbart baseret på en hurtig søgning en fejl andre har haft, men med hensyn til 'Pandas'.

### Forsøg 2:
    - Prøver at downgrade Pandas, ud fra github posts omkring lignende problem.
            -- Resultat: Det virkede ikke, samme fejl opstår.
    - Noget jeg burde prøve er at give funktionen model som en YAML fil. Bare for at udlukke
    - Kører igennem CLI måske?
    - Alternativ måde at lave NN på (.addDense)

### Problem 3:
Jeg kan ikke nå langt nok i build til, at producerer en verilog-file. 

    - Måske er det computer resourcer
    - Forsøg med et langt mindre NN, se om den kan compile til bånden (eller fejl opstår)
    - 
    NOTE: Den fejler efter en succesful pre-synthesis

        INFO: [HLS 200-111] Finished Pre-synthesis Time (s): cpu = 00:15:37 ; elapsed = 00:15:46 . Memory (MB): peak = 4939.090 ; gain = 4535.598 ; free physical = 158 ; free virtual = 855
        /home/pominiq/Vivado/2020.1/bin/rdiArgs.sh: line 286:  5983 Killed                  "$RDI_PROG" "$@"
    
    Og så går den til at udskrive rapporter (som ikke kan findes fordi synthesis aldrig nåede til enden)





%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
# Agenda oct 19 23 - AI by AI Seminar

- Legal issues surrounding the ability to create products with open-source tools, contra doing research/learning by applying tools. Have to research this difference.
    Tool names:
        - ChatGBT
            "The OpenAI API can be used for commercial purposes. However, when it comes to using the code generated by AI, it’s important to check whether AI-generated code can be copyrighted in your country. In the United States and the European Union, it’s not legal to copyright any kind of AI-generated content. To address copyright issues, you would need to modify the code generated by ChatGPT in a significant and meaningful way before copyrighting it under the license of your choice. Otherwise, the code is considered to be in the public domain."
        - Vivado HLS
            "may I use webpack to develop a bitstream for a FPGA in a product for sale?  The answer is: absolutely!"
    

- Put into ChatGPT, C++ 'forward function BareMetal' allows for Tensorflow summary to be made into a libraryless code that can be translated with HLS.

- We can use Caravel SOC by efabless https://github.com/efabless/caravel

- PDCA: Plan-do-check-act, engineering principle
 
- In the AI space: ChatGPT can generate a top-level function in Python way more reliably than Verilog.

- Super ultra complex blocks needs Azure for computing MLM2RTL.

- The Universal Verification Methodology (UVM) is a standardized methodology for verifying integrated circuit designs. 
Videre arbejde på 'Agenda oct 19 23' problem 2 og problem 3





%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
# Agenda oct 19 23

### Problem 1:
Jeg har lavet en model, men der er et problem med at import den fra et script til det næste, jeg må lige kigge en ekstra gang. Det er desuden ikke muligt for mig at reelt konvertere min model til HLS4ML accepteret format. 

### Svar 1:
VISER SIG at at i HLS4ML er 'batch_shape' fra 'keras_core'-modellen defineret som "batch_input_shape", dette ændrede jeg i 'core.py', og modellen loader korrekt nu (blev ændret 2 steder). Det virker at importerer sin model som en .JSON-file og så meget banalt attach weights til den.

    layer['input_shape'] = keras_layer['config']['batch_shape'][1:]

    dtype = keras_layer['config']['dtype']
    if dtype.startswith('int') or dtype.startswith('uint'):
        layer['type_name'] = 'integer_input_t'
        width = int(dtype[dtype.index('int') + 3 :])
        signed = not dtype.startswith('u')
        layer['precision'] = IntegerPrecisionType(width=width, signed=signed)
    # elif bool, q[u]int, ...

    output_shape = keras_layer['config']['batch_shape']



%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
# Agenda oct 18 23

-------------------------------------------------
## Overall research spørgsmål

### Problem 1:
Er verilog bundet til specifikke boards? Kan jeg få HLS4ML til at "bare" generere en .v-file uden at tage højde for technology?  Jeg troede at syntetisere var forholdsvist banalt.
### Svar 1:
* Dette er også tilfældet. I en given .v-file er det test-bench scripted som bruges til verificering af kredsløbets overall design. 

"Synthesis does not look into timing restrictions or how a particular line will get turned into an actual constructed device using resources on the chip."

"Implementation is where the bulk of a “build” cycle will be spent. In this step, the successfully-synthesized project (previous step) will be laid out using the on-chip resources of the FPGA."

Jeg har ikke brug for direkte implementation, og kan nøjes med Synthesis. Dvs. jeg skal "bare" få HLS4ML til at virke i første omgang, så en .v-file kan skabes og så kan jeg kører det igennem OpenLane2 pipeline, (alternativt OpenRoad flows).

-------------------------------------------------
## OpenLane 2 framework
Urørt siden oct 12 23

-------------------------------------------------
## HLS4ML framework
Okay, jeg er begyndt at bruge Keras_core (ie. Keras 3.0) som et framework oven på Tensorflow, og det virker godt til at lave modeller. Jeg har lavet min første model på MNIST 0-9 tals datasættet, og kan ændre på forskellige parametre for at ændre størrelse (og dette har typisk sammenhæng med accuracy). Jeg burde kunne konvertere Keras-project til noget der kan genereres af HLS4ML.

### Problem 1:
Jeg har lavet en model, men der er et problem med at import den fra et script til det næste, jeg må lige kigge en ekstra gang.

### Problem 2:
Det er desuden ikke muligt for mig at reelt konvertere min model til HLS4ML accepteret format.





%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
# Agenda oct 13 23
-------------------------------------------------
gdsfactory

- Greenwaves: GAP8 GAP9
- OpenFlowScripts
- DRC og LVS native to Klayout

Tilføjelser til research:
    * Det er muligt at programmere Sky130 pCells med GDSFactory som framework hvis noget DIY er implementeret.
    * Pythonic workflow for fremtidig development; Selv hvis





%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
# Agenda oct 12 23
-------------------------------------------------
## OpenLane 2 framework

### Problem 1 :
OpenLane2 fra efabless lader til at virke nu, og custom flows kan blive skabt ud fra dokumentation for deres Python API. Er downloaded gennem NixOS systemet? Dette er et super hyped up tool som jeg ikke har hørt om endnu men shit hvis det virker så klager jeg ikke (endnu)

Løsning 2 :
Når man har lavet et .py-script med de ønskede parameter skal man køre det igennem terminalen i en 'nix-shell'.
    * Dette gøres ved at være i 'openlane2' folder og skrive 'nix-shell', så kan man python3 script-name.py og så kører det med alle dependencies on PATH (lol det tog længere tid for mig at få til at virke, end at skrive).

### Problem 2 : 
Nu skal jeg finde en måde at få den sidste visuelle del, dvs. få Klayout til at visualisere det syntetiserede design. Jeg har desuden assignet technologi, og det ser pænt ud.

Løsning 2 :
Viser sig at man kan åbne klayout fra nix-shell til den specifikke .gds-fil. De endelige designs ligger i 'run'-folder, sorteret efter dato flow blev compilet.

### Problem 3 :
Kan jeg kører en vilkårlig verilog fil, alternativt en VHDL-fil, for begge er understøttet.

Løsning 3 :
Dette er nu muligt i test script "OL2_TEST_FILE.py", og den henter .v-file fra en anden mappe uden problemer. Det viser sig dog, at for at få flow til at køre uhæmmet skal man definerer en DIE AREA, såvel som at sætte noget offset, så der er place til straps (ERROR PDN-0185). Skal forstå dette bedre på et tidspunkt.

### Conclusion
OpenLane2 er klar til brug.
-------------------------------------------------
## HLS4ML framework

### Problem 1:
Suiten er downloaded men ingen examples kører. Grunden er VivadoHLS forsøger at bruge et board jeg ikke har; Eller nærmere, hls4ml examples bruger et board som jeg ikke har installeret i VivadoHLS WebPack, og derfor brækker den sig når jeg forsøger på synthesis.

### Løsning 1:
Man kan ændre hvilket board skal bruges i en .yml-fil. Det er faktisk også en parameter som kan tilføjes i function: 

        hls_model = hls4ml.converters.convert_from_keras_model(
            model, hls_config=config, output_dir='model_1/hls4ml_prj', part='xcu250-figd2104-2L-e'
        )       

Problemet er selfølgelig bare at denne function er kun gældende når man generer sin egen model. Examples kommer med en predefined part i .yml-fil.





%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
### Agenda oct 9 23

- HLS2ML virker næsten. 

Vivado HLS i WebPack lader til at virke.
Der er brug for et nyt script til at NN dog, da Kera pakker lader til at fucke up

Får fejl i HLS ved
"
ERROR: [HLS 200-70] Part 'xcku115-flvb2104-2-i' is not installed.
command 'ap_source' returned error code
    while executing
"source build_prj.tcl"
    ("uplevel" body line 1)
    invoked from within
"uplevel \#0 [list source $arg] "
"
Er ikke sikker endnu på hvor vigtigt dette er? 
Ligner det er relateret til et bestemt board, men hvis det forhindre i at generer Verilog så oops.
Producerer en output mappe fyldt med ting,
men ingen Rapporter kan findes i den, så designet kan ikke verificeres

- OpenLane 2 virker ikke

Det er ikke tydeligt i documentation hvorvidt man har brug for et underlæggende framework
eller sådan noget. Man "nix"er den bare, men smoke-test fejler pga. manglende dependency til
Verilator (hvorfor er denne ikke inkluderet?), og PDK skal installeres ved siden af, men der
er ikke en helt klar procedure endnu for hvordan de skal kommunikere.
Måske OpenLane2 bare er en Python library men der mangler en git clone et eller andet sted?

