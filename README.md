# Laser Monitoring System for the Muon g-2 experiment.
<sub>2</sub>
This code analyzes the laser monitor data and also performs some simulations to check the monitors performance. It also corrections for issues 
related to temperature fluctuations, humidity etc. in the long-term for the local monitors at the desired level of precision of the experiment.
The laser monitoring system consists of source and local monitors as shown below (left panel). It is used for constantly checking and calibrating the main calorimeters used in the experiment (all 9x6 PbF<sub>2</sub> crystals). A set of 4x4 is shown below (middle and right panels):</br>
<p align="center"><img width="370" alt="image" src="https://user-images.githubusercontent.com/27436642/162612696-213711b7-eb68-4931-9a2d-0b2bdb321375.png">
&nbsp;&nbsp;&nbsp;<img width="438" height="225" alt="image" src="https://user-images.githubusercontent.com/27436642/162613015-311004c4-50e2-4821-be2f-225e0b09ad20.png"></p></br>
The temperature (as noted by the optical table) and the amplitudes of pin diodes used in the source monitors varied inversely as shown (left panel).
The right panel depicts the stability of PIN 1 of the source monitor after applying all corrections for 30 days of data taking period:</br>
<p align="center"><img width="308" alt="Screen Shot 2022-04-10 at 6 14 58 AM" src="https://user-images.githubusercontent.com/27436642/162613438-8205195a-3ce5-4eb5-8b87-7135f61eccc2.png">
<img width="420" height="215" alt="image" src="https://user-images.githubusercontent.com/27436642/162613308-c89bd16b-3534-4e19-b892-603af8823bd5.png"></p></br>

### Instructions for running the code:
The code uses ROOT and C++. All data is saved in root trees are read and analyzed using simple macros.</br>
Make sure to have GCC 4.8.5+, clang 3.6+ and ROOT 6.24/06 or higher.
