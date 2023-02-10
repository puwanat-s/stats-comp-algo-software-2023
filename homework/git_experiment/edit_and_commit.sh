#!/usr/bin/env bash

for commit_count in {2..100}
do
  let linenum="10+$commit_count"
  sed -i "$linenum i Add a sentence" foo.tex
  pdflatex foo.tex > /dev/null 2>&1
  git add foo.pdf foo.tex
  git commit -m "Added sentence #$commit_count"
done
