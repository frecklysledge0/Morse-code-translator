# Morse Decoder using Pushdown Automata <img src="https://media.giphy.com/media/U22HxRRRXQDHrRwxz7/giphy.gif" width="40"/>


Implementation of a Morse code decoder using a [pushdown automata](https://en.wikipedia.org/wiki/Pushdown_automaton) in C++.

## Overview 👀

The program utilizes a pushdown automata (PDA) to decode Morse code input character by character. The PDA progresses through various states based on the input, using a stack to manage transitions and decode the Morse code into alphanumeric characters, detecting spaces between words.

## Formal definition ✏️

$$
M = (Q, \Sigma, \Gamma, \delta, q_{start}, z, F) \; t.c.
$$

* $Q = \{q_{start}, q_a, q_b, \dots, q_{z}, q_{err}, q_{space}, q_{wordSpace}\}$
* $\Sigma = \{., -, /, \; \;\}$
* $\Gamma = \{A, B, C, \dots, Z, \lambda \}$
* $\delta : Q \times \{ \Sigma \cup \{\lambda\}\} \times \{\Gamma \cup \{\lambda\}\} \rightarrow \{Q \times \Gamma  \cup \{\lambda\} \}$
* $z = \lambda$
* $F = \{q_a, q_b, \dots, q_z\}$

## Structure and functionality ⚙️

- **`morseAutomata()`**: Contains the implementation of the PDA for Morse code decoding;
- **`Stack Operations`**: Utilizes a stack to manage state transitions and the decoding process;
- **`Transition`**: Defined for each state to handle input symbols (dot, dash, space);
- **`Error Handling`**: States to identify and manage syntax errors in the Morse code input;
- **`States`**: Represented as constants (e.g., `START`, `A`, `B`) and mapped to specific decoding logic.

## Example of usage 💪

```bash
Type your morse code here: .... . .-.. .-.. --- / .-- --- .-. .-.. -..
Output: HELLO WORLD
```
