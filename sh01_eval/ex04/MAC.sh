#!/bin/bash

ifconfig -a | grep -i ether | awk '{print $2}'
