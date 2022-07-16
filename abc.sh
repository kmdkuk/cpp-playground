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
cp -n ${pwd}/template.cpp $a/main.cpp
cd $a

if [ ! -e ${a}/test ]; then
    oj download https://atcoder.jp/contests/abc${1}/tasks/abc${1}_a
    ret=$?
    if [ $ret -ne 0 ]; then
        rm -rf $a
    fi
fi

mkdir -p $b
cp -n ${pwd}/template.cpp $b/main.cpp
cd $b
if [ ! -e ${b}/test ]; then
    oj download https://atcoder.jp/contests/abc${1}/tasks/abc${1}_b
    ret=$?
    if [ $ret -ne 0 ]; then
        rm -rf $b
    fi
fi

mkdir -p $c
cp -n ${pwd}/template.cpp $c/main.cpp
cd $c
if [ ! -e ${c}/test ]; then
    oj download https://atcoder.jp/contests/abc${1}/tasks/abc${1}_c
    ret=$?
    if [ $ret -ne 0 ]; then
        rm -rf $c
    fi
fi

mkdir -p $d
cp -n ${pwd}/template.cpp $d/main.cpp
cd $d
if [ ! -e ${d}/test ]; then
    oj download https://atcoder.jp/contests/abc${1}/tasks/abc${1}_d
    ret=$?
    if [ $ret -ne 0 ]; then
        rm -rf $d
    fi
fi

mkdir -p $e
cp -n ${pwd}/template.cpp $e/main.cpp
cd $e
if [ ! -e ${e}/test ]; then
    oj download https://atcoder.jp/contests/abc${1}/tasks/abc${1}_e
    ret=$?
    if [ $ret -ne 0 ]; then
        rm -rf $e
    fi
fi

mkdir -p $f
cp -n ${pwd}/template.cpp $f/main.cpp
cd $f
if [ ! -e ${f}/test ]; then
    oj download https://atcoder.jp/contests/abc${1}/tasks/abc${1}_f
    ret=$?
    if [ $ret -ne 0 ]; then
        rm -rf $f
    fi
fi

mkdir -p $g
cp -n ${pwd}/template.cpp $g/main.cpp
cd $g
if [ ! -e ${g}/test ]; then
    oj download https://atcoder.jp/contests/abc${1}/tasks/abc${1}_g
    ret=$?
    if [ $ret -ne 0 ]; then
        rm -rf $g
    fi
fi

exit 0
