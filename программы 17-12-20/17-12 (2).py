class Car:

  brand="lada"
  color=""
  year=2000
  object=0
  def __init__(self):
    Car.object = Car.object+1
  def carcheck(self):
    print("brand "+ self.brand)
    print("color "+self.color)
    print("year " +str(self.year))
    print("-----")
  def itinerary(self,city,city2):
    print("itinerary "+ city,city2)
  def getcolor(self):
    print(self.color)
  def setcolor(self,color1):
    self.color=color1
  @classmethod
  def total_objects(cls):
    print("Total objects: ",cls.object)

car1=Car()
car1.itinerary("Ivanovo","Vladimir")
car1.setcolor("red")
car1.carcheck()

car2=Car()
car2.itinerary("Ivanovo","Kostroma")
car2.setcolor("green")
car2.carcheck()

car3=Car()
car3.itinerary("Ivanovo","Ilinskoe")
car3.setcolor("black")
car3.carcheck()
Car.total_objects()