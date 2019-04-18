# Fraction Class

## Overview 
A generic fraction class using C++ templates for storing and manipulating 
fractions.Tested the entired class using unit tests.
It includes following features:
- Store negative and positive fractions, in fractional form (decimal approximations will not be made);
- Can use the following binary operators on fractions
-   addition (all combinations of operations are possible)

for example:
```
fraction<int> a(3,5);
int b = 4;
fraction<int> c = a+a;
fracion<int> d = a +b;
fraction<int> e = b +a;
fraction<int> f = a + b +c;
```
all combinations are possible for all of the following operations as well, similar
to as shown above in addition example.
-   subtraction 
-   multiplication 
-   division
-   <, ==, !=, > (comparison)   

Also includes << and >> operator to take input from istream and show output in
ostream

### TO DO:
- Need to add conditions for overflow or underflow of data types when we
  perform operations on fractions
- Add More Operators overloading (>=,<=,++,--,~,-=,+=,->,[],(),etc)
- Make it generalise case which can also take care of std::string data type
- Interaction with native std::math library
- More optimized simplification of the operators
- Need to add precendance for operators to calculate expresions properly (BODMAS rule)


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

## Author
* ** Bhargav Dandamudi **

## License

This project is licensed under the MIT License - see the [LICENSE.md](LICENSE.md) file for details
