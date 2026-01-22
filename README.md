C++ Console Applications – Internship Projects

Overview

This repository contains **two C++ console-based applications** developed as part of my internship work. These projects demonstrate fundamental C++ programming concepts, user interaction, and basic data handling through practical examples.

Projects Included

1️⃣ Dice Rolling Game (C++)

Description

A simple C++ console application that simulates rolling two dice. The program generates random values, displays each die result along with the total, and allows the user to roll again based on input.

Features

* Rolls two dice with values from 1 to 6
* Displays individual dice values and their total
* Allows repeated rolls based on user choice

Technologies Used

* Language: C++
* Standard Libraries:
   `<iostream>`
   `<cstdlib>`
   `<ctime>`

How to Run

g++ dice_game.cpp -o dice_game
./dice_game

 Sample Output

You rolled:
Die 1: 3
Die 2: 5
Total: 8

Roll again? : y


2️⃣ To-Do List Application (C++)

Description

A console-based To-Do List application written in C++. The program allows users to add tasks, view existing tasks, and remove completed tasks using a menu-driven interface.

This project demonstrates basic data structures and user interaction in C++.

Features

* Add new tasks to the list
* View all existing tasks
* Remove tasks by selecting their number
* Menu-driven and easy to use

Technologies Used

* Language: C++
* Libraries:

   `<iostream>` for input/output
   `<vector>` for dynamic task storage
   `<string>` for handling text input

How It Works

1. The program displays a menu with available options.
2. Users select an option by entering a number.
3. Tasks are stored dynamically using a vector.
4. The program runs until the user chooses to exit.

How to Run

g++ todo_list.cpp -o todo_list
./todo_list


Sample Output

--- TO-DO LIST MENU ---
1. Add Task
2. View Tasks
3. Remove Task
4. Exit
Enter your choice:

Learning Outcomes

* Understanding random number generation in C++
* Using vectors for dynamic data storage
* Implementing menu-driven programs
* Handling user input and validation
* Writing clean, modular C++ code using functions


Author

Minahil
BSCS Student | Internship Project
