dpkg-scanpackages -m debs /dev/null debs > Packages
bzip2 -f Packages
