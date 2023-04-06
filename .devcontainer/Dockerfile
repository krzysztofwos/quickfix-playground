FROM mcr.microsoft.com/vscode/devcontainers/base:0-ubuntu-22.04
# Additional packages
RUN apt-get update && \
    export DEBIAN_FRONTEND=noninteractive && \
    apt-get install -y --no-install-recommends \
    ripgrep=13.0.0-2ubuntu0.1 \
    tig=2.5.1-1 && \
    apt-get clean -y && \
    rm -rf /var/lib/apt/lists/*
# C++
RUN apt-get update && \
    export DEBIAN_FRONTEND=noninteractive && \
    apt-get install -y --no-install-recommends \
    build-essential=12.9ubuntu3 \
    clang=1:14.0-55~exp2 \
    cmake=3.22.1-1ubuntu1.22.04.1 \
    cppcheck=2.7-1 \
    gdb=12.1-0ubuntu1~22.04 \
    lldb=1:14.0-55~exp2 \
    llvm=1:14.0-55~exp2 \
    valgrind=1:3.18.1-1ubuntu2 && \
    apt-get clean -y && \
    rm -rf /var/lib/apt/lists/*
# Project dependencies
RUN apt-get update && \
    export DEBIAN_FRONTEND=noninteractive && \
    apt-get install -y --no-install-recommends \
    libquickfix-dev=1.15.1+dfsg-4build1 && \
    apt-get clean -y && \
    rm -rf /var/lib/apt/lists/*
