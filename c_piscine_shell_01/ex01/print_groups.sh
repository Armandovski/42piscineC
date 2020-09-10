#!/bin/bash
#This program returns the list of groups for which the login is a member. The login is fed through environment variable FT_USER
id --name --groups $FT_USER | tr ' ' ',' | tr -d '\n'
