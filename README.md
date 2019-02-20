#Answers to the Provided Questions
##Why do embedded systems need a setup and a loop?

Embedded systems are usually meant to operate continuously, stopping only when a certain condition is met, or sometimes never at all. This is the loop part. An embedded system also likely has code that it want to run only once (for initializing ports, variables, etc.). This is the setup portion.

##Why does our code need to be compiled?

Computers require binary-level code in order to interpret instructions. If writing in Assembly, the code is assembled. If writing in a higher-level language that does not have a one-to-one translation to binary, a compiler must perform this translation.

##When lowering the frequency in step four, what is going wrong? Brainstorm some solutions. Dimmers exist in the real world. What is their solution?

Lowering the frequency does not lower the intensity of the light. Lowering the buty cycle would. Alternatively, a digital-to-analog converter could also be used. A real dimmer may use either of these, depending on the application.
