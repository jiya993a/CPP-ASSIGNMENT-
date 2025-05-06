//
class Employee:
    def __init__(self, name, position, salary):
        self.__name = name
        self.__position = position
        self.__salary = salary

    def display_details(self):
        print(f"Name: {self.__name}")
        print(f"Position: {self.__position}")
        print(f"Salary: ${self.__salary:.2f}")
