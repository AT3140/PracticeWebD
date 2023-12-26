'''
No concept of public, private and protected inheritance in python
use '__' as prefix for private function
use '_' for protected function
'''

class Parent:
    def __init__(self, value = 0):
        self.value = value
    def foo(self):
        print('Parent foo')
    def _protectedFoo(self):
        print('Parent protectedFoo')
    def __foo1(self):
        print('Parent foo1', self.value)

class Child(Parent):
    def __init__(self):
        super().__init__()
        self._protectedFoo()
        try:
            self.__foo1()
        except Exception as e:
            print(e)

Child().foo()

