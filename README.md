# Zleed Qt
The official desktop client for Zleed, powered by Qt's latest technology.

## Build & Run
### Requirements
You need to have a C/C++ compiler, Qt 6.3.2, and Inno Setup installed.

For Unix, Inno Setup is unavailable, but an alternative program builder will be used instead.

### Building
Use the build button on your desired IDE / editor, or manually do this on the terminal:
```shell
$ cmake -S ./ -B build && cmake --build build --config Debug --target all
```

If you decide to build the release variant manually, change the `--config` option to `Release` instead.

### Testing
Well, use your favorite file manager, or use the terminal to run the compiled program.

## License
Zleed Qt is licensed under the GNU GPL v3.