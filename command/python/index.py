# -*- coding: utf-8 -*-

# run it with: 
#   python index.py
#   python index.py --port=9091
#   python index.py -p 9091

if __name__ == "__main__":
    import getopt
    import sys
    
    try:
        options, args = getopt.getopt(sys.argv[1:], "hp:", ["help","port="])
    except getopt.GetoptError:
        sys.exit()
    
    port = "9090"
    for name, value in options:
        if name in ("-h", "--help"):
            print "usage"
        if name in ("-p", "--port"):
            port = value

    print 'port=%s' % port
	