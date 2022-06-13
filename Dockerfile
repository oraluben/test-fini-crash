FROM ubuntu:latest

RUN apt-get update
RUN apt-get install -y git build-essential

RUN git clone https://github.com/python/cpython.git
RUN git clone https://github.com/oraluben/test-fini-crash.git

WORKDIR /cpython
RUN git checkout 9c8e490b8f9e40a6fe9815be58bacaecab5369ee
RUN apt-get install -y libssl-dev libbz2-dev zlib1g-dev
RUN apt-get install -y libffi-dev
# RUN apt-get install -y libreadline-gplv2-dev libncursesw5-dev libssl-dev libsqlite3-dev tk-dev libgdbm-dev libc6-dev libbz2-dev
RUN ./configure --with-pydebug
RUN make install -j

WORKDIR /test-fini-crash
RUN python3 -m pip install .
RUN python3 -c 'import _cds; _cds._set_mode(0)'
