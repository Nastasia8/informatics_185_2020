class Animals:
    def __init__(self, name):
        self.name = name

    def speak(self, voice):
        pass

class Cat(Animals):
    def speak(self, voice):
        print(self.name, ' is saying ', voice)

class Dog(Animals):
    def speak(self, voice):
        print(self.name, ' is saying ', voice)

cat1 = Cat("Tom")
cat1.speak('Myau')

dog1 = Dog("Bool")
dog1.speak('Gav')