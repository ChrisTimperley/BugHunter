FROM ubuntu:latest
MAINTAINER Chris Timperley "christimperley@gmail.com"

RUN apt-get update
RUN apt-get install -y make build-essential gcc g++ autoconf libtool
RUN apt-get install -y git
RUN apt-get clean
RUN rm -rf /var/lib/apt/lists/* /tmp/* /var/tmp/*
