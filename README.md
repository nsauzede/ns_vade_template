# ns_vade_template
[![Build Status][WorkflowBadge]][WorkflowUrl]

⚙️ Vade project template

This is a template to boostrap a new vade project, including the following initial useful features:
- [ ] README.md containing vade information/instructions
- [ ] vade .gitignore to silence files produced by vade
- [ ] automated vade github CI

# How to test

## Prerequisites
To build/test, first install the vade tool:
[vade](https://github.com/nsauzede/ns_vade)

## Create a new project package (C by default)
```
$ vade new coolpkg
```

Then one can tinker with `vade/src/coolpkg` sources (see vade documentation).

## Build and test project packages
```
$ vade clean test
    RM  vade/pkg
    RM  vade/bin
    CC  coolpkg.o
    AR  coolpkg.a
    AR  libcoolpkg.a
    CC  coolpkg_test.o
    CC  test.o
    AR  coolpkg_test.a
    AR  libcoolpkg_test.a
    CXX coolpkg_test.exe
    VGRUN       ./vade/bin/coolpkg_test.exe
[==========] Running tests from test suite.
[----------] Global test environment set-up.
[ RUN      ] coolpkg_TestMock_
[       OK ] coolpkg_TestMock_ (0 ms)
[----------] Global test environment tear-down
[==========] 1 tests from test suite ran. (19 ms total)
[  PASSED  ] 1 tests.
```


[WorkflowBadge]: https://github.com/nsauzede/ns_vade_template/workflows/vade/badge.svg
[WorkflowUrl]: https://github.com/nsauzede/ns_vade_template/commits/main
