#!/bin/sh

BIN=cgi-bin
WWW=www

if [ $1 ]
then
  echo "> Compiling CGI program"
  make
  if [ $? != 0 ] ; then exit; fi
  echo "> Copying to server cgi-bin directory"
  cp -r $BIN/* $1
  if [ $? != 0 ] ; then exit; fi
  echo "> Done with cgi-bin!"
else
  echo "! ERROR: No destination path specified for server cgi-bin directory"
fi

if [ $2 ]
then
  echo "> Copying www assets"
  cp -r $WWW/* $2
  if [ $? != 0 ] ; then exit; fi
  echo "> Done with www!"
else
  echo "! ERROR: No destination path specified for www directory"
fi
