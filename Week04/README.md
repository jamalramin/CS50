# CS50 Week 4

## Description

This repository contains my solutions for **Week 4 of CS50x**.

The exercises focus on **memory, pointers, file I/O, and image manipulation** in C.

## Problems

### Volume

A program that modifies the volume of a WAV audio file.

### Filter

A program that applies image filters such as grayscale, sepia, reflection, and blur to BMP images.

### Recover

A program that recovers JPEG images from a forensic memory card image.

## What I Learned

During Week 4, I practiced:

* Using pointers in C
* Working with memory addresses
* Allocating and freeing memory
* Reading and writing files
* Working with binary data
* Manipulating structs
* Processing BMP and WAV files

## How to Compile

For example:

```bash
make volume
make filter
make recover
```

## How to Run

Example:

```bash
./volume input.wav output.wav 2.0
```

```bash
./filter -g input.bmp output.bmp
```

```bash
./recover card.raw
```

## Author

CS50 student
