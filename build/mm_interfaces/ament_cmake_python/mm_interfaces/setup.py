from setuptools import find_packages
from setuptools import setup

setup(
    name='mm_interfaces',
    version='0.0.0',
    packages=find_packages(
        include=('mm_interfaces', 'mm_interfaces.*')),
)
