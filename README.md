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

![Uppercase movements](https://github.com/SrVariable/RubikCube/assets/96599624/a7102fc5-2354-4d95-9520-68ba14de396d)
![Lowercase movements](https://github.com/SrVariable/RubikCube/assets/96599624/e6f0029b-6b55-4b9f-aad6-2477b301b7ff)

### Uppercase

- **B**: Rotate the B face 90º counterclockwise.
- **F**: Rotate the F face 90º clockwise.
- **L**: Rotate the L face 90º counterclockwise.
- **R**: Rotate the R face 90º clockwise.
- **U**: Rotate the U face 90º clockwise.
- **D**: Rotate the D face 90º counterclockwise
- **M**: Rotate the middle layer parallel to the R and L faces 90º counterclockwise.
- **E**: Rotate the middle layer parallel to the U and D faces 90º counterclockwise.
- **S**: Rotate the middle layer parallel to the F and B faces 90º clockwise.

### Lowercase

- **b**: Rotate the B face and the middle layer parallel to the F and B faces 90º counterclockwise.
- **f**: Rotate the F face and the middle layer parallel to the F and B faces 90º clockwise.
- **l**: Rotate the L face and middle layer parallel to the R and L faces 90º counterclockwise.
- **r**: Rotate the R face and middle layer parallel to the R and L faces 90º clockwise.
- **u**: Rotate the U face and middle layer parallel to the U and D faces face 90º clockwise.
- **d**: Rotate the D face and middle layer parallel to the U and D faces face 90º counterclockwise
- **x**: Rotate the cube in the X axis 90º clockwise.
- **y**: Rotate the cube in the Y axis 90º clockwise.
- **z**: Rotate the cube in the Z axis 90º clockwise.

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
