class Car:

    CARS = 0

    def __init__(self, name, year, condition):
        self.name = name
        self.color = 'White'
        self.year = year
        self.condition = condition
        Car.CARS = Car.CARS + 1

    def show_characteristic(self):
        print("Car's name is ",self.name, "\nCar's color is ", self.color, "\nCar was released in ", self.year, "\nCar is ", self.condition)

    def way(self, cityA, cityB):
        self.cityA = cityA
        self.cityB = cityB
        print("Car goes from ",cityA, " to ",cityB)

    @property
    def cars_color(self):
        return self.color

    @cars_color.setter
    def cars_color(self):
        self.color = color

    @classmethod
    def objects(cls):
        print("Total number of cars is ", cls.CARS)


car1 = Car('Tesla',2020, 'new')
car1.color = 'Black'
car1.show_characteristic()
car1.way('Berlin', 'Paris')
print('-------------------------------------------------------------------------------')
car2 = Car('Audi', 2020, 'new')
car2.color = 'Dark Blue'
car2.show_characteristic()
car2.way('London', 'Liverpool')
print('-------------------------------------------------------------------------------')
car3 = Car('Ferrari', 2000, 'old')
car3.color = 'Red'
car3.show_characteristic()
car3.way('Roma', 'Milano')
print('-------------------------------------------------------------------------------')
Car.objects()