class Car:
        
    brand="KIA"
    color="Pink"
    year=2012
    object=0
    def __init__(self):
        Car.object = Car.object+1
    def show_car(self):
        print("brand: "+ self.brand)
        print("color: "+self.color)
        print("year: " +str(self.year))
    def route(self,city,city2):
        print("Route: "+ city,city2)
    def get_color(self):
        print(self.color)
    def set_color(self,color1):
        self.color=color1
    def set_year(self,year1):
        self.year=year1        
    def check_year(self):
        if int(self.year) < 2015:
            print("Car is old")
        else:
            print("Car is new")
    @classmethod
    def objects(cls):
        print("Objects: ",cls.object)

car1=Car()
car1.route("Moscow","Ivanovo")
car1.set_color("blue")
car1.set_year(2011)
car1.check_year()
car1.show_car()

print("************")

car2=Car()
car2.route("Kineshma","Ivanovo")
car2.set_color("yellow")
car2.set_year(2019)
car2.check_year()
car2.show_car()

print("************")

car3=Car()
car3.route("Kovrov","Moscow")
car3.set_color("red")
car3.set_year(2020)
car3.check_year()
car3.show_car()

print("************")
Car.objects()