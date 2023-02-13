""" This finds the overlap between two provided files """
import sys
print(f"overlap is {set(line.strip() for line in open(sys.argv[1])).intersection(set(line.strip() for line in open(sys.argv[2])))}")
