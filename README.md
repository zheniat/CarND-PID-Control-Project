# PID Controller - Driving a Vehicle
Self-Driving Car Engineer Nanodegree Program

[//]: # (Image References)

[image1]: ./media/lower_speed.mp4 "Car simulation at a lower speed"
[image2]: ./media/higher_speed.mp4 "Car simulation at a higher speed"

PID controller is implemented in C++ to maneuver a vehicle around a simulated track. Two PID controllers are used: one to control vehicle steering and another to control throttle. Parameters for both controllers have been selected manually via trial and error.

## Steering Controller
Proportional term was set low (0.25) and when applied with the derivative term set to 0 the car would overshoot and oscillate out of control. Adding a derivative term (2.5) stabilized the car around the center of the lane, greatly reducing oscillations. Adding a small integral term (0.0005) smoothed car handling, though increasing the term led to a much rougher handling.

## Throttle Controller
Throttle controller was configured with terms similar to the Steering Controller, with the exception of the derivative term, which had to be reduced to prevent the car from stalling on sharp turns.

## Vehicle Performance
The vehicle managed to complete the track at both lower speed (<40 mph) and higher speed (<60 mph), though a passenger would likely get mildly sick at a lower speed and seriously sick at a higher speed due to the car oscillating around the center of the track.

Lower speed performance:

![alt text][image1]

Higher speed performance:

![alt text][image2]
