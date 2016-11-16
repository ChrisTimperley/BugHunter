FROM ubuntu:latest

# install auto* tools
RUN apt-get update --fix-missing
RUN apt-get install -y git
RUN apt-get install -y autoconf libtool build-essential gcc

# install oniguruma
RUN apt-get install -y libonig-dev flex bison
