while true ; do sleep 20 ; SCORE=$(./score.py | grep "<title>" | awk -F'<title>' '{print $2}' |  awk -F'|' '{print $1}') ; TIME=$(date +%D'-'%H':'%M) ; echo $TIME - $SCORE ; done
