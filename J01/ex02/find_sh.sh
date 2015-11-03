#!/bin/sh
find * -name \*.sh | sed 's/\.sh//g' | grep -o "[^\/]*$"
