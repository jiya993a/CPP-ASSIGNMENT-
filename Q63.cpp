//
class Student:
    total_students = 0  # static data member

    def __init__(self, name):
        self.name = name
        Student.total_students += 1

    @staticmethod
    def get_total_students():
        return Student.total_students
