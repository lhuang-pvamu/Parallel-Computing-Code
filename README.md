# Parallel-Computing-Code
It is a repository for the Parallel Computing course at PVAMU.

## Prerequisites

You need Linux or Mac OS to build and run these examples.

### Linux Setup ###
You need to install the following software on Linux (recommend Ubuntu)
* GNU compiler (gcc and g++)
* git
* make
```
sudo apt install g++
sudo apt install git
sudo apt install make
```

### Mac Setup ###
You need to install xcode and libomp

```
xcode-select --install
brew install libomp
```

### Install IDE ###
* any editor (such as vim, nano, notepad++, 
Atom, Visual Studio Code)
  * for example, install Notepad++ following instructions from [this link](https://websiteforstudents.com/install-notepad-on-ubuntu-16-04-17-10-18-04-via-snap/)


## Getting Started
Fellow the instructions to get these examples, build and run them.

### Clone the repository
```
git clone https://github.com/lhuang-pvamu/Parallel-Computing-Code.git
``` 
### Build your code
Go to each directory (such as labs/lab1), and the build the code using make.

```
cd labs/lab1
make
```

### Run your code
You need to set up the number of threads before you run an OpenMP code.
```
export OMP_NUM_THREADS=4
```
You may either run both sequential code and OpenMP code together by:
```
make run 
```
or you may run them individually:
```
./EXECUTABLE_NAME
```


