//
class Point:
    def __init__(self, x=0, y=0):
        self.x = x
        self.y = y

    @classmethod
    def from_point(cls, point):
        return cls(point.x, point.y)

    def display(self):
        print(f"Point({self.x}, {self.y})")
