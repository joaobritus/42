#! /bin/sh

ifconfig | grep ether | cut -c 8-32 | tr -d " "
