#!/bin/bash
#This program picks up all MAC addresses from this machine
ip address | grep "link/[^ ]*" | grep -o '[^ ]*$'
