# THE-LUDO-DICE-DISTRIBUTION-ANALYZER
Dice Roll Probability Simulator

This project is a scientific simulator written in C language that models the act of rolling two six-sided dice.
By running the simulation for about 1,000,000 times, the program calculates the true experimental probability distribution of dice sums (2 to 12) and compares it with the theoretical probability known from mathematics.


 Project Description-:

The purpose of this project is to show how random numbers generate and loops can be used to simulate real-world events.
The program:

• Rolls two dice using rand()
• Repeats the process 1,000,000 times
• Stores how many times each sum (2–12) appears
• Calculates the percentage frequency
• Prints a neat table of results
• Compares simulated results with theoretical probabilities

This project demonstrates how computers can recreate real-world randomness and verify known maths results.

 Concepts Used-:

C Programming Concepts

• for loops
• Functions (roll_one_die())
• Arrays
• rand() and srand()
• time() for random seeding
• printf() formatting

Mathematical Concepts

• Probability Distribution
• Frequency Count
• Experimental Probability
• Theoretical Probability (e.g., 7 appears 6 out of 36 ways)
• Percentage Calculation

How to compile-:

Use this command in the terminal:

gcc main.c -o dice_simulator

Nothing extra is needed because the program does not require any external libraries.


 How to Run-:

After compiling, run the program:

./dice_simulator

This will output a formatted probability table similar to:

Sum   Count        Percentage
-----------------------------------
 2     27796        2.78%
 3     55503        5.55%
 ...
 7    167012       16.70%


-File Structure Example -:

/Dice-Simulator
│── main.c
│── README.md
└── output.txt (optional)


---

If you want, I can also create:

• a project explanation PDF
• a flowchart
• a block diagram
• comments inside the C code
• a final conclusion section for your assignment

Just tell me!
