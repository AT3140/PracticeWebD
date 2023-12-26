class MyClass:
    class_variable = 10

    @classmethod
    def class_method(cls):
        print(cls.class_variable)  
    
    @staticmethod # not mandatory to decorate this
    def static_method():
        print('hey')

MyClass.class_method() 
MyClass.static_method()

