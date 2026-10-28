RECTANGLE CLASS 
**OOP Concepts Used**
• Encapsulation: The class Rectangle holds the data attributes (width and length) and the functions that manipulate them (getArea, getPerimeter). The data members length and width are declared as private, which hides their internal state from the rest of the program and protecting them from direct, unintended modification.

• Constructors: The class utilizes a constructor to initialize objects upon creation. It uses a parameterized constructor with default arguments (double w=0.0, double l=0.0) combined with member initializer lists (width{w}, length{l}) for efficient initialization.

• Getter and Setter Methods: Public methods (getWidth, getLength, setWidth, setLength) are provided to safely read and modify the private data members.

• Const Member Functions: Functions like getArea() and getPerimeter() are marked as const. This guarantees that calling them will not alter the internal state of the Rectangle object.

**Algorithm**
1. Class Definition: I defined a Rectangle class with private variables to store its width and length.
2. Initialization Setup:  A constructor was set up to assign initial values to the width and length whenever a new Rectangle object is instantiated.
3. Core Logic Implementation: Implement public methods to calculate the Area (formula: width * length) and Perimeter (formula: 2 * (width + length)).
4. Execution in main():
   
a. Rectangle1 was instantiated with a predefined width of 10.0 and length of 20.0.
b. Calculate and output its dimensions, area, and perimeter.

c. Rectangle2 was instantiated using default initialization (which sets width and length to 0.0), then update its width to 5.0 and length to 10.0 using the setter methods.
d. Calculate and output the dimensions, area, and perimeter of'Rectangle2.

**Possible Error Points**
•Module & Format Support: The code uses c++23. If the code is compiled using an older compiler version, it will result in compilation errors.

• Lack of Input Validation: The setter methods (setWidth and setLength) do not perform any checks to prevent negative values. A rectangle cannot logically possess a negative width or length. If negative values are passed, the program will blindly accept them, leading to incorrect calculations for the area and perimeter.
