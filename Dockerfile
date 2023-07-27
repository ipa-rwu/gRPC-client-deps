# syntax=docker/dockerfile:experimental
ARG BUILDER_SUFFIX=
ARG BUILDER_PREFIX=
ARG ROS_DISTRO=
ARG ORG=
FROM ${ORG}:${ROS_DISTRO}-ros-core as base
FROM ${BUILDER_PREFIX}builder${BUILDER_SUFFIX} as builder

FROM base as pre_build
COPY . /root/ws/src/
COPY --from=builder workspace.bash /builder/workspace.bash
RUN cd /root/ws/src/plcnext_deps && \
    ./dep_copy.sh ${ROS_DISTRO} && \
    rm -rf /var/lib/apt/lists/*

FROM pre_build as build
ARG CMAKE_ARGS=
ENV CMAKE_ARGS $CMAKE_ARGS
RUN apt-get update -qq && \
    apt remove cmake -y && \
    apt-get install wget -qq && \
    wget -O - https://apt.kitware.com/keys/kitware-archive-latest.asc | gpg --dearmor - | sudo tee /usr/share/keyrings/kitware-archive-keyring.gpg && \
    echo 'deb [signed-by=/usr/share/keyrings/kitware-archive-keyring.gpg] https://apt.kitware.com/ubuntu/ focal main' | sudo tee /etc/apt/sources.list.d/kitware.list && \
    apt-get update -qq && \
    apt-get install -y --no-install-recommends cmake ros-noetic-ros-core=1.5.0-1* -y
RUN apt-get update -qq && \
    /builder/workspace.bash build_workspace /root/ws && \
    rm -rf /var/lib/apt/lists/*

FROM build as test
RUN apt-get update -qq && \
    /builder/workspace.bash test_workspace /root/ws && \
    rm -rf /var/lib/apt/lists/*

FROM test as deploy
RUN apt-get update -qq && \
    rm -rf /var/lib/apt/lists/*
