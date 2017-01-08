FROM christimperley/gumtree
MAINTAINER Chris Timperley "christimperley@gmail.com"

ADD . /tmp/bughunter
RUN apt-get update && \
    apt-get install -y python3-setuptools python3-pip && \
    apt-get install -y jq vim && \
    pip3 install gitpython && \
    cd /tmp && \
    git clone https://github.com/ChrisTimperley/PythonCGum pycgum && \
    cd /tmp/pycgum &&\
    python3 setup.py install && \
    cd /tmp/bughunter && \
    python3 setup.py install && \
    apt-get remove -y python3-setuptools && \
    apt-get clean && \
    rm -rf /var/lib/apt/lists/* /tmp/* /var/tmp/*
ADD example /example
ADD pretty /usr/bin/pretty
RUN mkdir -p /bughunter
ENV BUGHUNTER /bughunter
