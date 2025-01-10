<!-- GETTING STARTED -->
## Getting Started
This repository contains a ready to use project template for compiling a program that uses Aurora™ Vision Library on Linux.
To get a local copy up and running follow these simple steps.

### Prerequisites
Compiling the program requires Ubuntu operating system with GNU gcc compiler and CMake installed. 
Having Aurora [Aurora™ Vision Library](https://www.adaptive-vision.com/en/user_area/download/) installed is also mandatory for include files.

CMake installation on Ubuntu
```bash
sudo apt update && sudo apt install -y build-essential cmake
```

CMake will automatically find AVL package.

### Usage
1. Clone this repository
   ```sh
   git clone https://github.com/ErykDevZebra/EmptyAVLProject.git
   ```
2. Open console at cloned repository, and run
   ```sh
   sudo chmod +x build.sh
   ./build.sh
   ```

Aurora™ Vision Library [Documentation](https://docs.adaptive-vision.com/current/avl/)
