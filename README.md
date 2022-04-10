# Laser Monitoring System for the Muon g-2 experiment.
<sub>2</sub>
This code analyzes the laser monitor data and also performs some simulations to check the monitors performance. It also corrections for issues 
related to temperature fluctuations, humidity etc. in the long-term for the local monitors at the desired level of precision of the experiment.
The laser monitor is used for constantly checking and calibrating the main calorimeters used in the experiment 
(all 9x6 PbF<sub>2</sub> crystals shown below:</r>
<img width="458" alt="image" src="https://user-images.githubusercontent.com/27436642/162613015-311004c4-50e2-4821-be2f-225e0b09ad20.png">
</br>
The entire laser monitoring system consists of source and local monitors as shown below:</br>
<img width="390" alt="image" src="https://user-images.githubusercontent.com/27436642/162612696-213711b7-eb68-4931-9a2d-0b2bdb321375.png"></br>
The temperature (as noted by the optical table) and the amplitudes of pin diodes used in the source monitors varied inversely as shown:

<img width="468" alt="Screen Shot 2022-04-10 at 6 14 58 AM" src="https://user-images.githubusercontent.com/27436642/162613438-8205195a-3ce5-4eb5-8b87-7135f61eccc2.png"></br>

The final results after applying all corrections for a 30 days data taking period is below:</br>
<img width="406" alt="image" src="https://user-images.githubusercontent.com/27436642/162613308-c89bd16b-3534-4e19-b892-603af8823bd5.png"></br>

## Energy spectrum of each crystal

### Instructions for running the code:
These are the instructions for installing GEANT4 in mac OSX:
<ol> <li> </li>
  <li>  <b>(CMake version 3.3+) and GCC 4.8.5+, clang 3.6+ </b></li>
  <ul> Sub lists<li> </li> 
    <li> </li> 
    <li> X11</li> 
   <li>  </li> 
   </ul> 
</ol>
$ cd Downloads</br>
$ tar -xzf geant4.10.04.p02.tar.gz</br>
 
