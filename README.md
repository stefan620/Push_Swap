# push_swap - 42 Project

`push_swap` is a project that focuses on creating a sorting algorithm to sort a stack of integers using a limited set of operations. The goal is to implement an efficient algorithm that minimizes the number of moves.

---

## Table of Contents

- [About the Project](#about-the-project)
- [Program Requirements](#program-requirements)
- [Allowed Operations](#allowed-operations)
- [Getting Started](#getting-started)
  - [Prerequisites](#prerequisites)
  - [Installation](#installation)
- [Project Highlights](#project-highlights)
- [Testing](#testing)

---

## About the Project

The objective of the `push_swap` project is to sort a stack of integers using only specific operations. The project assesses your understanding of algorithms, data structures, and problem-solving skills, as well as your ability to optimize for performance.

---

## Program Requirements

1. The program must accept a series of integers as arguments and output a sequence of operations to sort them.
2. The program must:
   - Sort the integers in ascending order.
   - Use the least number of operations possible.
3. Error handling:
   - Validate inputs (no duplicates, valid integers).
   - Handle errors gracefully by displaying an error message and exiting.

---

## Allowed Operations

| **Operation** | **Description**                                                                 |
|---------------|---------------------------------------------------------------------------------|
| `sa`          | Swap the first two elements of stack A.                                         |
| `sb`          | Swap the first two elements of stack B.                                         |
| `ss`          | Swap the first two elements of both stacks A and B.                            |
| `pa`          | Push the top element from stack B to stack A.                                  |
| `pb`          | Push the top element from stack A to stack B.                                  |
| `ra`          | Rotate stack A upwards (first element becomes the last).                       |
| `rb`          | Rotate stack B upwards.                                                        |
| `rr`          | Rotate both stacks A and B upwards.                                            |
| `rra`         | Reverse rotate stack A (last element becomes the first).                       |
| `rrb`         | Reverse rotate stack B.                                                        |
| `rrr`         | Reverse rotate both stacks A and B.                                            |

---

## Getting Started

### Prerequisites

- A GCC-compatible C compiler.
- `make` utility.

### Installation

1. Clone the repository:
   ```bash
   git clone https://github.com/stefan620/push_swap.git
   cd push_swap
2. Compile the program:
   ```bash
   make
3. Run the program:
   ```bash
   ./push_swap 4 3 1 2
   
---

## Project Highlights

- Efficiency: The primary challenge is minimizing the number of operations.
- Input Validation: Handle edge cases like duplicates, invalid numbers, or empty inputs.
- Stack Management: Use stack data structures to manage sorting operations efficiently.
- Performance: Aim for O(n log n) or similar time complexity for larger inputs.

---
## Testing
 ```bash
./push_swap 3 2 1

./push_swap 100 23 84 75 12 5 ...
