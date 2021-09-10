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

###  AWS Amazon Linux ###
if you are using AWS Amazon Linux or Centos/Redhat, please use the following commands to install these software
```
sudo yum install gcc
sudo yum install gcc-c++
sudo yum install git
```

### Mac Setup ###
You need to install xcode and libomp

If you don't have homebrew installed, please install it first by using the following command: 

```
/bin/bash -c "$(curl -fsSL https://raw.githubusercontent.com/Homebrew/install/master/install.sh)"
```
After install homebrew, type the following commands to install xcode and libomp. 

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
cd Parallel-Computing-Code
cd labs/lab1
```

If you are using Linux, skip this step. If you are using *Mac*, you need to replace the make.def file with make.mac. Simply copy make.mac to overrite make.def:
```
cp make.mac make.def
```

Buid the lab 1 programs: 
```
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


