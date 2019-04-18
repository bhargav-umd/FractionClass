# Fraction Class

##Overview 
A generic fraction class using C++ templates for storing and manipulating 
fractions.Tested the entired class using unit tests.
It includes following features:
- Store negative and positive fractions, in fractional form (decimal approximations will not be made);
- Overload the following binary operators to apply to fractions
-   + (addition)
-   - (subtraction)
-   * (multiplication)
-   / (division)
-   <, ==, !=,, > (comparison)
-   << (used with std::cout)
-   >> (used with std::cin)

TO DO:
- Need to add conditions for overflow or underflow of data types when we
  perform operations on fractions
- Add More Operators overloading (>=,<=,++,--,~,-=,+=,->,[],(),etc)
- Make it generalise case which can also take care of std::string data type
- Interaction with native std::math library
- More optimized simplification of the operators


## Install via command line 
```
cd <path to repository>
mkdir build
cd build
cmake ..
make
```
## Run tests:
```
./test/fraction_test
```
## Run program:
```
 ./app/fraction 
```
## Building for code coverage 
```
sudo apt-get install lcov
cmake -D COVERAGE=ON -D CMAKE_BUILD_TYPE=Debug ../
make
make code_coverage
```
#### This generates a index.html page in the build/coverage sub-directory that can be viewed locally in a web browser.

## Doxygen Documentation
To generate Doxygen Documentation in HTML and LaTEX, follow the next steps:
```
cd <path to repository>
mkdir <documentation_folder_name>
cd <documentation_folder_name>
doxygen -g <config_file_name>
```
Inside the configuration file, update:
```
PROJECT_NAME = 'fraction Class '
INPUT = ../app ../include ../test ../
```
Run and generate the documents by running the next command:
```
doxygen <config_file_name>
`````````
#### Use file Explorer and Open html/index.html file to see the doxygen documentation in web browser.

