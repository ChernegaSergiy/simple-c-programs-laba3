# Lab Work 3: Functions and Calculations in C

This project is a laboratory work for the "Computer Technologies and Programming" course. It contains a collection of small C programs demonstrating basic calculations and the use of functions.

## Programs Included

This repository contains two separate programs:

### 1. Triangle Area Calculator (`triangle_area.c`)

This program calculates the area of a triangle given the Cartesian coordinates of its three vertices. It uses the Shoelace formula (Gauss's area formula) for the calculation.

### 2. Time Converter (`time_converter.c`)

This utility function converts a given total number of minutes into an hours and minutes format (e.g., 150 minutes becomes 2 hours and 30 minutes).

## How to Compile and Run

Each program is a standalone file and should be compiled separately.

### Triangle Area Calculator

```bash
# Compile the program
gcc triangle_area.c -o triangle_area -lm

# Run the executable
./triangle_area
```

> [!NOTE]
> The `-lm` flag is required to link the math library for the `fabs` function.

### Time Converter

The `time_converter.c` program includes an active `main` function that demonstrates how to convert a given number of minutes into hours and minutes. You can compile and run it directly without any modifications.

```bash
# 1. Compile the program
gcc time_converter.c -o time_converter

# 2. Run the executable
./time_converter
```

## Contributing

Contributions are welcome and appreciated! Here's how you can contribute:

1. Fork the project
2. Create your feature branch (`git checkout -b feature/AmazingFeature`)
3. Commit your changes (`git commit -m 'Add some AmazingFeature'`)
4. Push to the branch (`git push origin feature/AmazingFeature`)
5. Open a Pull Request

Please make sure to update tests as appropriate and adhere to the existing coding style.

## License

This project is licensed under the CSSM Unlimited License v2.0 (CSSM-ULv2). See the [LICENSE](LICENSE) file for details.
