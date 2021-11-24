
# Rules

## What we do?

We implement library for work with CSV-files (as described in RFC4180)

## What purpose of it?

1. Learn how to write libraries in C++
2. Learn how to use CMake (e.g. build, test, using 3rd party libraries)
3. Learn how to use GoogleTest framework
4. Learn how to use clang's extensions (e.g. include-what-you-use)
5. Learn how to use travis.
6. Learn how to use doxygen
7. Learn how to use PlantUML
8. ... Add what you interested for

## What rules?

1. Follow `style_guide.md` codestyle guide
2. Don't break `master` branch:
    1. Run `run_before_pull_request.sh` before pull request.
    2. Checks that all enabled tests passed.
3. Don't disable tests without serious reason.
4. Always write tests
5. Use kanban board to create and complete tasks. 
6. All PR must be assigned to tasks (except only for minor improvements)

## 