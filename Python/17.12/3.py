class Animal:
    vois = ''

    def __init__(self, name):
        self.name = name

    def speak(self):
        print(f'Animal is saying {self.vois}')


class Cat (Animal):
    vois = 'miau'

    def speak(self):
        print(f'Cat is saying {self.vois}')


class Dog (Animal):

    vois = 'gav'

    def speak(self):
        print(f'Dog is saying {self.vois}')


x = Dog('Sharik')
x.speak()
