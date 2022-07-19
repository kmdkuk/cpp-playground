#!/usr/bin/env bash

if ! which oj;then
  if ! which python3;then
    echo "not found python3"
    exit 1
  fi

  if ! which pip3;then
    echo "not found pip3"
    exit 1
  fi

  pip3 install online-judge-tools
fi

if [ ! -d /opt/ac-library ]; then
  wget https://img.atcoder.jp/practice2/ac-library.zip
  sudo mkdir -p /opt/ac-library
  sudo unzip ac-library.zip -d /opt/ac-library
  rm ac-library.zip
fi

if [ ! -d /opt/boost/gcc ];then
  if [ uname == "Darwin" ];then
    brew install boost
    sudo ln -sf /usr/local/opt/boost/ /opt/boost/gcc
  fi
fi

