# simpleOccupantFOAM
Testing OpenFOAM's simpleFOAM solver on a test case of an occupant inside a closed room

- Problem statement : 

An experimental room of 3 m wide, 3.5 m long, and 2.5 m high has an occupant at the center of the room 
and the heat released from the occupant's body can be assumed as 38 Watts (assuming no radiation is taking place). 
The ventilating supply diffuser is located at the lower side of the room which supplies the fresh air at 0.2 m/s 
and 20 °C and the outlet is present at the upper side of the room in atmospheric conditions. 

The surface temperature of the exposed wall is varying from floor to ceiling due to interaction with the outside environments. 
The profile of temperature variation is shown in Figure 1. Let assume the roof, ceiling, and all internal walls as adiabatic walls.
There is a lightweight pollutant gas-producing source at the bottom corner backside of the room which is approximated as a 0.25 m x 0.25 m x 0.1 m box. 
The rate of emission is 0.5 mg/s and its diffusion coefficient in the air is 0.2 cm2/s. Pollutant gas distribution can be modeled by using a passive scalar transport equation. 
This room is to be simulated to predict airflow pattern, pollutant distribution, and temperature distribution in the room and on the surface of the occupant.

- Requirements : 
 
 Post process : 
 (1) Fluid flow patterns
 (2) Thermal plume 
 (3) Temp. distribution on the walls/occupant 
 (4) Pollutant distribution 
 
 
