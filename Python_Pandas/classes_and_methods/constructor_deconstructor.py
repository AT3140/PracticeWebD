class abc:
    def __init__(self):
        print('constructor called')
    def __del__(self):
        print('deconstructor called')
abc()
del abc