# Wordle Solver

## Preview of the project
![Worlde-Game](https://github.com/DavidV1600/Worlde-Solver-with-UI/assets/115104357/cbdb3c6f-98bb-433c-bd67-6b366491307d)


## Description of the Project:
The word-finding algorithm is based on information theory, using Shannon's entropy. It calculates, for each letter in the alphabet, its probability of appearing in any position (1, 2, 3, 4, 5) in the remaining possible words. By analyzing all the words, it chooses the one that provides the most information. The algorithm uses the "easy mode" version, where it can use words even if they are no longer a possible correct answer. This version is better because there are situations where a word that cannot be the solution provides more information than any of the remaining possibilities to be the solution.

## Average solving time
The algorithm has an average of 4.35 (4.34922) attempts until it finds the correct answer, and it starts guessing with the word "LUTRE."
There are a number of 11000+ possible words, which you can find in 'cuvinte.in' file

## Project Startup
To run the project you need to simply clone the repo
   ```sh
   git clone https://github.com/DavidV1600/Wordle-Solver-with-UI
   ```
After that you need to click the compile button inside VS, and if you want to play the game yourself just click the Start button and type 5-letter CAPS LOCK words and click Try Word button.
If you want to let them bot guess, just check the Bot Activation button and then click Start.

## References
https://youtu.be/v68zYyaEmEA,  
https://youtu.be/fRed0Xmc2Wg
