#!/bin/sh
ldapsearch -Q cn | grep cn | grep BON | wc -l | sed "s/ //g"
