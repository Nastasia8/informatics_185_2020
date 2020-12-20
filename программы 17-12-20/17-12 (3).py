class Animal:
  def __init__(self, name):
    self.name = name  
class Cat(Animal):
  def says(self):
    print( self.name+" says meow")

class Doog(Animal):
  def say(self):
    print( self.name+" says dav")

cat=Cat("Myrzik")
cat.says()

doog=Doog("Bobic")
doog.say()