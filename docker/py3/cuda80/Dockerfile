FROM nvidia/cuda:8.0-cudnn7-runtime-ubuntu16.04

RUN apt-get update && apt-get install -y --no-install-recommends \
    python3-pip python3-setuptools python3-wheel \
    && rm -rf /var/lib/apt/lists/*

RUN pip3 install nnabla-ext-cuda80
