#!/usr/bin/python3
from setuptools import setup, find_packages

setup(
    name='bughunter',
    version='0.0.1',
    description='A Git repository mining tool for studying bugs in C programs',
    long_description='TBA',
    author='Chris Timperley',
    author_email='christimperley@gmail.com',
    url='https://github.com/ChrisTimperley/BugHunter',
    license='MIT',
    packages=['bughunter'],
    install_requires=[
        'docker'
    ],
    include_package_data=True
)
