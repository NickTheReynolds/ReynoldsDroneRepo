# Reynolds Drone Repository
Code Repo for the Mike and Nick Reynolds' Drone Project

## Autonomous Mk I Notes:
Despite a desire to find a simple control architecture for the initial stage of the project, upon examining the system more carefully, we opted
for a slightly more complex approach. For the first system, we have created a state-space model estimator and opted to control the system using and LQR controller (details on which are readily available [here](https://underactuated.mit.edu/lqr.html)). PID control is simply impossible given the necessary functionality for this initial test and the time an effort coding the framework for the LQR will make the jump to a full MPC controller for Mk II quite simple.

Please note that this controller is designed for gliding (small-angle approximation).
