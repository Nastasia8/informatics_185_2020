class Auto:
    total = 0

    def __init__(self, name, color, year, condition):
        self.__name = name
        self.__color = color
        self.__year = year
        self.__condition = condition
        Auto.total += 1

    def ShowSpecifications(self):
        print(
            f'Car: {self.__name}, color: {self.__color}, year: {self.__year}, condition: {self.__condition}')

    def way(self, a, b):
        print(f'{self.__name} go to {b} from {a}')

    def SetColor(self, color):
        self.__color = color

    def GetColor(self):
        return self.__color

    @classmethod
    def total_objects(cls):
        print(f'Totak objects = {cls.total}')


vaz = Auto("VAZ 2105", "purple", 1998, "b/u")
vaz.ShowSpecifications()
vaz.way('Ivanovo', 'Moscow')
vaz.SetColor('maroon')
audi = Auto("Audi", "white", 2007, "b/u")
to = Auto("Toyota", "black", 2020, "new")
print(vaz.GetColor())
Auto.total_objects()
