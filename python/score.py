#!/usr/bin/python

import urllib

link = "http://www.espncricinfo.com/india-v-australia-2016-17/engine/match/1062574.html"
f = urllib.urlopen(link)
myfile = f.read()
print myfile
