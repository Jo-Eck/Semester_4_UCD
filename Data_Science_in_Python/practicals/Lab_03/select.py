import sys
[print(x.strip()) for x in [open(sys.argv[1]).readlines()[int(i)] for i in sys.argv[2:]]]