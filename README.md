# Counter Strike 2 dll main internal

Counter Strike 2 dll main is an internal implemented as a dynamic link library. This provides a foundation for creating internal cheats that run directly within the game process, offering advantages such as enhanced security and access to game internals.

## Features
- **Threaded execution**: Utilizes multithreading to execute cheat logic asynchronously, ensuring smooth performance without blocking the main game thread.
- **Injection qequired**: Requires a injector to load the cheat into the process memory space.

## Usage
1. **Compile dll**: Compile the source code into a dll file using a compatible x64 C++ compiler.
2. **Select injection method**: Choose a dll injector tool to inject the compiled DLL into the process.

## Dependencies
- **Windows api**: Relies on Windows API functions for thread management and DLL entry point handling.

## Installation
1. **Compile source code**: Compile the provided source code into a DLL file using a C++ compiler.
2. **Select dll injector**: Choose a DLL injector tool compatible with your system and preferred injection method.
3. **Inject dll**: Use the selected DLL injector to inject the compiled DLL into the CS2 process.
