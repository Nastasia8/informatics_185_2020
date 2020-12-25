class Employee:

    name = "NoName"
    secondName = "NoName"
    dateOfBirth = "NoData"
    workExperience = 0
    position = "NoData"
    homeAddress = "NoData"
    phoneNumber = "NoData"
    hoursWorkedPerWeek = 0
    costOfOneHour = 0
    salary = 0

    def __init__(self, name, secondName, dateOfBirth, workExperience, position, address, phoneNumber, hoursWorkedPerWeek, costOfOneHour):
        self.name = name
        self.secondName = secondName
        self.dateOfBirth = dateOfBirth
        self.workExperience = workExperience
        self.position = position
        self.address = address
        self.phoneNumber = phoneNumber
        self.hoursWorkedPerWeek = hoursWorkedPerWeek
        self.costOfOneHour = costOfOneHour

    def __checkValue_1(self):
        if (isinstance(self.costOfOneHour, int) or isinstance(self.costOfOneHour, float)) and (self.costOfOneHour > 0):
            return True
        return False

    def __checkValue_2(self):
        if (isinstance(self.hoursWorkedPerWeek, int) or isinstance(self.hoursWorkedPerWeek, float)) and (self.hoursWorkedPerWeek > 0):
            return True
        return False

    def __checkValue_3(self):
        if isinstance(self.workExperience, int) and (self.workExperience > 0):
            return True
        return False

    def showInfoAbout(self):
        print("Full name: " + self.name, self.secondName, "\nDate of birth: " + self.dateOfBirth, "\nAddress: " + self.address, "\nPhone number: " + self.phoneNumber)
        print("Work experience: " + str(self.workExperience), "years", "\nWork position: " + self.position, "\nNumber of hours worked: " + str(self.hoursWorkedPerWeek), "\nCost of a working hour: " + str(self.costOfOneHour))

    def weeklySalary(self):
        if Employee.__checkValue_1(self) and Employee.__checkValue_2(self):
            self.salary = self.hoursWorkedPerWeek * self.costOfOneHour
            print("Weekly salary: " + str(self.salary))
        else: 
            print("Uncorrect data")

    def award(self):
        if Employee.__checkValue_3(self):
            if (self.workExperience < 3) and (self.workExperience >= 0):
                prize = 0.03 * self.salary
            elif (self.workExperience < 6) and (self.workExperience >= 3):
                prize = 0.05 * self.salary
            elif (self.workExperience <= 9) and (self.workExperience >= 6):
                prize = 0.07 * self.salary
            else:
                prize = 0.13 * self.salary
            print("Prize for " + self.name, self.secondName, ":", prize)