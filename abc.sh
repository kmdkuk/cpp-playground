#!/usr/bin/env bash

if [ $# -ne 1 ]; then
    echo "Usage: $0 xxx(x=[0-9])" 1>&2
    exit 1
fi

pwd=$(pwd)
a=${pwd}/ABC/$1/a
b=${pwd}/ABC/$1/b
c=${pwd}/ABC/$1/c
d=${pwd}/ABC/$1/d
e=${pwd}/ABC/$1/e
f=${pwd}/ABC/$1/f
g=${pwd}/ABC/$1/g

mkdir -p $a


cp -n template.cpp $a/main.cpp
cd $a
oj download https://atcoder.jp/contests/abc${1}/tasks/abc${1}_a
ret=$?
if [ $ret -ne 0 ]; then
    rm -rf $a
    exit 1
fi

mkdir -p $b
cp -n template.cpp $b/main.cpp
cd $b
oj download https://atcoder.jp/contests/abc${1}/tasks/abc${1}_b
ret=$?
if [ $ret -ne 0 ]; then
    rm -rf $b
    exit 1
fi

mkdir -p $c
cp -n template.cpp $c/main.cpp
cd $c
oj download https://atcoder.jp/contests/abc${1}/tasks/abc${1}_c
ret=$?
if [ $ret -ne 0 ]; then
    rm -rf $c
    exit 1
fi

mkdir -p $d
cp -n template.cpp $d/main.cpp
cd $d
oj download https://atcoder.jp/contests/abc${1}/tasks/abc${1}_d
ret=$?
if [ $ret -ne 0 ]; then
    rm -rf $d
    exit 1
fi

mkdir -p $e
cp -n template.cpp $e/main.cpp
cd $e
oj download https://atcoder.jp/contests/abc${1}/tasks/abc${1}_e
ret=$?
if [ $ret -ne 0 ]; then
    rm -rf $e
    exit 1
fi

mkdir -p $f
cp -n template.cpp $f/main.cpp
cd $f
oj download https://atcoder.jp/contests/abc${1}/tasks/abc${1}_f
ret=$?
if [ $ret -ne 0 ]; then
    rm -rf $f
    exit 1
fi

mkdir -p $g
cp -n template.cpp $g/main.cpp
cd $g
oj download https://atcoder.jp/contests/abc${1}/tasks/abc${1}_g
ret=$?
if [ $ret -ne 0 ]; then
    rm -rf $g
    exit 1
fi

exit 0
