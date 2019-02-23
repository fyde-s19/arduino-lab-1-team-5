# arduino-lab-1-team-5
## Questions and Answers:
- Why do embedded systems need a setup and loop?
  Setup is used to initialize the system and run one time tasks while the loop is for recurring or periodic tasks.
- Why does our code need to be compiled?
  We must compile our code into AVR machine code as the ATMEGA328P only runs machine code (not C / C++).
- When lowering the frequency in step four, what is going wrong?
  The blinking is obvious. Solution is to use a high frequency (high enough that you can't see the transitions). Duty cycle should be used to dim, not frequency.
