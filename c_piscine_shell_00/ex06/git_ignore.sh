#!/bin/bash
#This program is to list the ignored files in the local git repository
git status --ignored -s | grep '!!' | cut -d ' ' -f2
