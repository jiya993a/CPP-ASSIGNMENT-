//
class Employee:
    def __init__(self, name, position, salary):
        self.__name = name          # private attribute
        self.__position = position  # private attribute
        self.__salary = salary      # private attribute

    def display_details(self):
        print(f"Name: {self.__name}")
        print(f"Position: {self.__position}")
        print(f"Salary: ${self.__salary:.2f}")
