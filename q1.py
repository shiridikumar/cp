class Child(Parent1,Parent2):
    def __init__(self):
        pass

    def fun1(self):
        Parent1.fun1()
        Parent.fun1()
    
    def fun2(self):
        Parent2.fun2()


