
# CS50P Week 6 – File I/O

#### Video Demo:

(https://www.youtube.com/watch?v=Rl0ludWTLxs)

#### Description:

This project is part of **CS50's Introduction to Programming with Python (CS50P)**, Week 6, which focuses on **File I/O**.

The program demonstrates how Python can read information from files, process that information, and write results to another file. It uses Python's built-in file-handling features, including `open()`, reading files, writing files, and working with CSV data where appropriate.

The main purpose of this project is to practice working with files and to understand how programs can store and retrieve data outside of the program itself.

### Features

* Reads data from files.
* Processes the information using Python.
* Writes output to files.
* Uses appropriate file modes such as `"r"` and `"w"`.
* Handles file data using Python data structures.
* Demonstrates concepts learned in CS50P Week 6.

### How to Run

Make sure Python is installed on your computer.

Run the program using:

```bash
python project.py
```

Replace `project.py` with the actual name of the Python file.

### Files

* `project.py` — Main Python program.
* `README.md` — Description and documentation of the project.
* Other input/output files — Used by the program when required.

### What I Learned

Through this project, I learned how to:

* Open and close files in Python.
* Read and write text files.
* Use `with open(...)` to work safely with files.
* Process information stored in files.
* Work with CSV files.
* Handle user input and file data together.

### Design Choices

I used Python's `with open()` syntax because it automatically closes the file after the program finishes working with it. This makes the program safer and avoids leaving files open unnecessarily.

The program separates the input, processing, and output steps so that the code is easier to understand and maintain.

### Conclusion

This project helped me understand how Python programs can interact with external files instead of relying only on information stored while the program is running. It also provided practical experience with one of the most important concepts from CS50P Week 6: **File I/O**.
