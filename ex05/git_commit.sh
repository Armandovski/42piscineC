#!/bin/bash
# This script returns the ID of the last 5 commits in the current git repository
git log --format="%H" -n 5
