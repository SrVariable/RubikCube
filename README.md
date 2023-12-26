# RubikCube

## Table of Contents
> 1. [Description](#description)
> 2. [Requirements](#requirements)
> 3. [Usage](#usage)
> 4. [Movements](#movements)
> 5. [How to Play](#how-to-play)

## Description

Terminal Based Game of a [Rubik's Cube](https://en.wikipedia.org/wiki/Rubik%27s_Cube). Each face is represented with a colored square emoji.

The colors available are:

- 🟧 Orange (Up face)
- 🟨 Yellow (Front face)
- 🟩 Green (Right face)
- 🟥 Red (Down face)
- 🟦 Blue (Left face)
- 🟪 Purple (Back face)

## Requirements

- git
- gcc
- make

## Usage

Clone the repository

```Shell
git clone https://github.com/SrVariable/RubikCube.git
```

Go to the cloned repository

```Shell
cd RubikCube
```

Execute make

```Shell
make
```

Run the program

```Shell
./rubik
```

## Movements

### B

Rotate the B face 90º coounterclockwise.

![image](https://github.com/SrVariable/RubikCube/assets/96599624/bf3ef4ba-4a76-4268-82b5-d616c9248e09)

### F

Rotate the F face 90º clockwise.

![image](https://github.com/SrVariable/RubikCube/assets/96599624/04a1aafa-2142-439a-a28d-bdd2ff8065a0)

### L

Rotate the L face 90º counterclockwise.

![image](https://github.com/SrVariable/RubikCube/assets/96599624/1024e8f6-50c9-4b28-b785-4a3b43acac15)

### R

Rotate the R face 90º clockwise.

![image](https://github.com/SrVariable/RubikCube/assets/96599624/e70b8213-7262-4bfd-8a86-ad4b2d3a7b7e)

### U

Rotate the U face 90º clockwise.

![image](https://github.com/SrVariable/RubikCube/assets/96599624/dfd7de1a-4753-49f0-be05-5f770b8015cd)

### D

Rotate the D face 90º counterclockwise

![image](https://github.com/SrVariable/RubikCube/assets/96599624/7ecdad07-3fff-41e6-80c8-81aca961d771)

### M

Rotate the middle layer parallel to the R and L faces 90º counterclockwise.

![image](https://github.com/SrVariable/RubikCube/assets/96599624/17a55662-69bf-4c67-a367-72717774ca22)

### E

Rotate the middle layer parallel to the U and D faces 90º counterclockwise.

![image](https://github.com/SrVariable/RubikCube/assets/96599624/e40616d0-7d62-4521-b5b6-34bbfdfe6a96)

### S

Rotate the middle layer parallel to the F and B faces 90º clockwise.

![image](https://github.com/SrVariable/RubikCube/assets/96599624/49b210bd-0db1-445d-a1ff-beff1241bca3)

> [!NOTE]
> Adding 2 after the letter will make the same movement twice. So B2 is the same as doing B B.
> 
> Adding \' after the letter will make the reverse movement. So B' is the same as doing B B B.

> _Reference: [Rubik's Cube Move Notations](https://www.rubiksplace.com/move-notations/)_

## How to Play

When you run the program it will display the original position of the cube and will ask you to introduce a movement (listed before). You can introduce more than one movement in a single turn. For example:

> **Introduce a movement: B2FL'R**

This will do B2, F, L', R.

> [!NOTE]
>
> If you introduce more than one movement in a single turn, it will directly display the cube with the respective movements applied.

> [!TIP]
> 
> To undo a movement you have to type the opposite movement in reverse.
>
> So in order to undo B2FL'R you will have to type R'LF'B'B'.
