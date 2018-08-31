Hallo Dieter,

ich habe ein kleines Beispiel mit googletest vorbereitet:

```
|
├── googletest-release-1.8.0/	<--- C++ googletest framework
│   └── ...
├── library/			<--- ANSI C Library mit Funktion(en)
│   ├── CMakeLists.txt
│   ├── library.c
│   └── library.h
├── tests/			<--- Unit tests für die Library
│   ├── CMakeLists.txt
│   ├── main.cpp
│   └── tests.cpp
│
├── CMakeLists.txt		<--- "Build Skript" für cmake
└── README.md
```

CMake ist ein Cross-Platform Buildsystem.
Das aktuelle googletest framework gibt es unter https://github.com/google/googletest.
Der Einfachheit halber habe ich es mit in das Beispiel kopiert.

Um das Beispiel auszuprobieren musst du folgende Schritte durchführen:

1. Du benötigst einen C und C++ Compiler, z.B. MSVC unter Windows oder gcc unter Linux.

2. Lade dir das Buildsystem CMake herunter und installiere es. (https://cmake.org/download/)

3. Checke mein Beispielrepo über die Konsole aus:

   `\> git clone https://github.com/timmi-on-rails/googletest-example.git`
   
   Wenn du kein git installiert hast kannst du dir es als zip runterladen (https://github.com/timmi-on-rails/googletest-example/archive/master.zip)

4. Lege dir ein Verzeichnis auf gleicher Höhe wie das googletest-example an und kompiliere das Projekt mit CMake:
   ```
   \> mkdir build
   \> cd build
   build\> cmake ..\googletest-example
   build\> cmake --build .
                         ^ Achtung Punkt
   ```

5. Hat das geklappt, dann kannst du die unit tests jetzt ausführen:

   `build\> tests\tests`

6. :-)
