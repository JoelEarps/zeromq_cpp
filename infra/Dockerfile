FROM ubuntu:20.04

ENV DEBIAN_FRONTEND=noninteractive
RUN apt-get update; \
    apt-get install \
        build-essential \
        cmake \
        git \
        gdb \
        valgrind \
        uuid-dev \
        libssl-dev \
        automake \
        autoconf \
        autogen \
        libtool \
        pkgconf \
        libssh-dev \
        lcov \
        python3 \
        libzmq3-dev -y; \ 
    apt-get clean