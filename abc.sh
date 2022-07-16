#!/usr/bin/env bash

if [ $# -ne 1 ] && [ $# -ne 2 ]; then
    echo "Usage: $0 xxx(x=[0-9]) abcd(optional. specify need case)" 1>&2
    exit 1
fi

pwd=$(cd $(dirname $0); pwd)
# create_dir 081 a abcd(optional)
function create_dir(){
    p=${pwd}/ABC/$1/$2
    if [ -n $3 ] && [[ "$3" == *$2* ]] || [ -z $3 ]; then
        mkdir -p $p
        cp -n ${pwd}/template.cpp $p/main.cpp
        cd $p
        if [ ! -e ${p}/test ]; then
            oj download https://atcoder.jp/contests/abc${1}/tasks/abc${1}_${2}
            ret=$?
            if [ $ret -ne 0 ]; then
                rm -rf ${p}
            fi
        fi
    fi
}

case_list="a b c d e f g"

for c in ${case_list};do
    create_dir $1 $c $2
done

exit 0
