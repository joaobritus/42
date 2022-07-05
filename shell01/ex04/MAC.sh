#! /bin/sh

ifconfig | grep ether | tr -d "	" | tr -d " " | tr -d "ether"
