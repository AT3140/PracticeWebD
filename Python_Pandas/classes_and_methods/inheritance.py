'''
Multiple Inheritance implemented here foo() method defined in each class
         Parent
         /    \
     Child    Child1
         \    /
  MultipleInheritedChild
super.foo() method of MultipleInheritedChild calls foo() of Child
'''
class Parent:
    def __init__(self, value = 0):
        print('Parent Constructor')
        self.value = value
    def foo(self):
        print('foo')
    def __del__(self):
        print('Parent Deconstructor')

class Child(Parent):
    def __init__(self):
        super().__init__()
        print('Child constructor')
    def foo(self):
        print('Child foo', self.value)
    def __del__(self):
        super().__del__()
        print('Child Deconstructor')

class Child1(Parent):
    def __init__(self):
        super().__init__()
        print('Child1 constructor')
    def foo(self):
        print('Child1 foo')
    def __del__(self):
        super().__del__()
        print('Child1 Deconstructor')

class MultipleInheritedChild(Child, Child1):
    def __init__(self):
        super().__init__()
        print('Multiple Inheritance')
        super().foo()
    def __del__(self):
        super().__del__()

# Parent()#.foo()
# Parent.foo()
# Child().foo()
m = MultipleInheritedChild() 
del m