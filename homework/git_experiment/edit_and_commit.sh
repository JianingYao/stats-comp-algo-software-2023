#!/usr/bin/env bash

for commit_count in {2..100}
do
  let linenum="10+$commit_count"
  sed -i "$linenum i This is the $commit_count th sentence." foo.tex
done





    # sed -i "$linenum i This is sentence $commit_count." foo.tex
