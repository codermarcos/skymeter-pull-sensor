# 🪂 Skymeter - PullSensor

**🪂 Skymeter** is group of projects for skydive. **PullSensor** is an extendable audible altimeter.

This project is built using [raspberry pi pico](https://www.raspberrypi.com/documentation/microcontrollers/pico-series.html) and [Pico C/C++ SDK][pico-sdk-doc].

## 🎉 Getting Started

### Requirements to run this project

This repository uses:

| Dependencies                                 | Description        | Docs             |
| -------------------------------------------- | ------------------ | ---------------- |
| [![c-version]](#install-c)                   | C/C++              | [📚][c-doc]      |
| [![cmake-version]][cmake-download]           | CMake              | [📚][cmake-doc]  |

> You can use [NVM][nvm-download] to select correct node version based on file `.nvmrc`.


### Developing in this project

1. Clone [this project]():

```bash
git clone git@github.com:codermarcos/skymeter-pull-sensor.git
```

2. Clone [pico-sdk](https://github.com/raspberrypi/pico-sdk):

```bash
git clone git@github.com:raspberrypi/pico-sdk.git
```

> The folder structure should be something like that:
> - skymeter-pull-sensor
> - pico-skd

3. Create a `build` folder:

> Enter into the project folder `cd skymeter-pull-sensor`

```bash
mkdir build
cd build
```

4. Run build command using cmake:

```bash
cmake .. -DPICO_SDK_PATH=../../pico-sdk
make
```

### Install C

Install [GCC](https://gcc.gnu.org/) on Ubuntu Packages:

```bash
sudo apt update
sudo apt install build-essential
```

## 📖 Learn More

To learn more about this project, take a look at the following resources:

* [Pico SDK][pico-sdk-doc] - understand about pico sdk.

[c-doc]: https://learn.microsoft.com/pt-br/cpp/c-language/?view=msvc-170
[c-version]: https://img.shields.io/badge/c-11.4.0-blue

[cmake-download]: https://cmake.org/download/
[cmake-doc]: https://cmake.org/documentation/
[cmake-version]: https://img.shields.io/badge/cmake-3.22.1-blue


[pico-sdk-doc]: https://www.raspberrypi.com/documentation/microcontrollers/c_sdk.html