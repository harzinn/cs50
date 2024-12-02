import sys

if len(sys.argv) != 2:
    print('Missing command line arguement')
    sys.exit()
else:
    print(f'Hello, {sys.argv[1]}')