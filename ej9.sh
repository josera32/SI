#!/bin/bash


echo $(( ( $(date -ud '$1' +'%s') - $(date -ud '$2' +'%s')
