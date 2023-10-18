from date import Date

class Employee:
    def __init__(self, firstname="default", lastname="default", birthdate=Date(), hiredate=Date()):
        self.firstname = firstname
        self.lastname = lastname
        self.birthdate = birthdate
        self.hiredate = hiredate

    def get_bd(self):
        return self.birthdate

    def get_hd(self):
        return self.hiredate

    def print(self):
        print(f"Birth Date: {self.birthdate}")
        print(f"Name: {self.firstname} {self.lastname}")
        print(f"Hire Date: {self.hiredate}")
